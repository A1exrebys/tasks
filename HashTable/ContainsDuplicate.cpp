#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
	bool containsDuplicates(vector<int>& nums) {
		unordered_set<int> hset;

		for (auto& n : nums) {
			if (hset.count(n))
				return true;
			else
				hset.insert(n);
		}
	}
};
