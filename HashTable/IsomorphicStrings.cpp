#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	bool isIsomorphic(string s, string t) {
		unordered_map<int, int> hmap1;
		unordered_map<int, int> hmap1;

		for (int i = 0; i < s.size(); i++) {
			if (!hmap1.count(s[i])) {
				if (hmap2.count(s[i]))
					return false;

				hmap1[s[i]] = t[i];
				hmap2[t[i]] = s[i];
			}

			if (hmap1[s[i]] != t[i])
				return false;
		}

		return true;
	}
};
