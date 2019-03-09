#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int numJewelsInStones(string J, string S) {
		unordered_set<char> jew(J.begin(), J.end());
		int cnt = 0;

		for (auto& c : S) {
			if (jew.count(c))
				cnt++;
		}

		return cnt;
	}
};
