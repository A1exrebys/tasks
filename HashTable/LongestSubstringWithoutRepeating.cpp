#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		unordered_set<char> hset;
		int i = 0, j = 0, maxlen = 0;

		if (s.empty())
			return 0;

		if (s.size() == 1)
			return 1;


		while (i < s.size() && j < s.size()) {
			if (!hset.count(s[j])) {
				hset.insert(s[j++]);
				maxlen = max(maxlen, j - i);
			} else {
				hset.erase(s[i++]);
			}
		}

		return maxlen;
	}
};
