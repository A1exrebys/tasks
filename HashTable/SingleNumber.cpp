#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
	bool singleNumber(vector<int>& nums) {
		unordered_set<int> hset;

		for (auto& n : nums) {
			if (hset.count(n))
				hset.erase(n);
			else
				hset.insert(n);
		}

		return *hset.begin();
	}
};

#if 0
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int el = 0;

		for (auto& x : nums)
			el ^= x;

		return el;
	}
};
#endif
