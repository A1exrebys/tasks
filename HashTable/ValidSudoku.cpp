#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
		unordered_map<char, int> hmap1;
		unordered_map<char, int> hmap2;
		unordered_map<char, int> hmap3;

		for (int i = 0; i < board.size(); i++) {
			for (int j = 0; j < board.size(); j++) {
				if (board[i][j] == '.')
					continue;

				if (hmap1.count(board[i][j]))
					return false;
				else
					hmap1[board[i][j]] = i;
			}

			hmap1.clear();
		}

		for (int i = 0; i < board.size(); i++) {
			for (int j = 0; j < board.size(); j++) {
				if (board[j][i] == '.')
					continue;

				if (hmap2.count(board[j][i]))
					return false;
				else
					hmap2[board[j][i]] = i;
			}

			hmap2.clear();
		}

		for (int i = 0; i < board.size(); i += 3) {
			for (int j = 0; j < board.size(); j += 3) {
				for (int l = i; l < i + 3; l++) {
					for (int m = j; m < j + 3; m++) {
						if (board[l][m] == '.')
							continue;

						if (hmap3.count(board[l][m]))
							return false;
						else
							hmap3[board[l][m]] = l;
					}
				}

				hmap3.clear();
			}
		}

		return true;
	}
};

#if 0
class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
		map<pair<char, int>, int> map1;
		map<pair<char, int>, int> map2;
		map<pair<char, int>, int> map3;

		for (int i = 0; i < 9; i ++) {
			for (int j = 0; j < 9; j ++) {
				if (board[i][j] == '.')
					continue;

				int k = (i / 3) * 3 + j / 3;

				auto k1 = make_pair(board[i][j], j);
				auto k2 = make_pair(board[i][j], i);
				auto k3 = make_pair(board[i][j], k);

				map1[k1]++;
				map2[k2]++;
				map3[k3]++;

				if (map1[k1] > 1 || map2[k2] > 1 || map3[k3] > 1)
					return false;
			}
		}

		return true;
	}
};
#endif

#if 0
class Solution {
public:
	bool isValidSudoku(vector<vector<char>>& board) {
		unordered_map<string, int> map1;
		unordered_map<string, int> map2;
		unordered_map<string, int> map3;

		for (int i = 0; i < 9; i ++) {
			for (int j = 0; j < 9; j ++) {
				if (board[i][j] == '.')
					continue;

				int k = (i / 3) * 3 + j / 3;

				string s1 = to_string(board[i][j]) + to_string(j);
				string s2 = to_string(board[i][j]) + to_string(i);
				string s3 = to_string(board[i][j]) + to_string(k);

				map1[s1]++;
				map2[s2]++;
				map3[s3]++;

				if (map1[s1] > 1 || map2[s2] > 1 || map3[s3] > 1)
					return false;
			}
		}

		return true;
	}
};
#endif
