#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> ret(numRows);

		generate1(ret, 0, numRows);

		return ret;
	}

	void generate1( vector<vector<int>>& v, int i, int numRows) {
		if (i == numRows)
			return;

		if (i == 0) {
			v[i].push_back({1});
		} else if (i == 1) {
			v[i].push_back(1);
			v[i].push_back(1);
		} else {
			v[i].push_back(1);

			for (int k = 1; k <= i - 1; k++)
				v[i].push_back(v[i - 1][k - 1] + v[i - 1][k]);

			v[i].push_back(1);
		}

		generate1(v, i + 1, numRows);
	}
};


#if 0
class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> ret(numRows);
		int i = 0;

		while (i != numRows) {
			if (i == 0) {
				ret[i]. push_back(1);
			} else if (i == 1) {
				ret[i].push_back(1);
				ret[i].push_back(1);
			} else {
				ret[i].push_back(1);

			for (int k = 1; k <= i - 1; k++)
				ret[i].push_back(ret[i - 1][k - 1] + ret[i - 1][k]);

				ret[i].push_back(1);
			}

			i++;
		}

		return ret;
	}
};
#endif
