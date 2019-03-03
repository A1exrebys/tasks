#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	int firstUniqChar(string s) {
		unordered_map<char, int> freq;

		for (int i = 0; i < s.size(); i++) {
			if (freq.count(s[i])) {
				freq[s[i]]++;
			} else {
				freq[s[i]] = 1;
			}
		}

		for (int i = 0; i < s.size(); i++) {
			if (freq[s[i]] == 1)
				return i;
		}

		return -1;
	}
};