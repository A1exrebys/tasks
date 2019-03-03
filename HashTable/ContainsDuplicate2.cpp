#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		unordered_map<int, int> table;

		for (int i = 0; i < nums.size(); i++) {
			if (table.count(nums[i]) > 0) {
				if (i - table[nums[i]] <= k)
					return true;
			}

			table[nums[i]] = i;
		}

		return false;
	}
};
