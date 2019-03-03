#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	void reverseString(vector<char>& s) {
		reverse(s, 0, s.size() - 1);
	}

	void reverse(vector<char>& s, int sst, int bst) {
		if (sst >= bst)
			return;

		char c = s[sst];
		s[sst] = s[bst];
		s[bst] = c;

		reverse(s, sst + 1, bst - 1);
	}
};

#if 0
class Solution {
public:
	void reverseString(vector<char>& s) {
		for (int i = 0; i < s.size()/2; i++) {
			char c = s[i];
			s[i] = s[s.size() - i - 1];
			s[s.size() - i - 1] = c;
		}
	}
};
#endif
