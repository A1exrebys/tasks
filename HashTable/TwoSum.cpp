#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> hmap;

		for (auto it = nums.begin(); it != nums.end(); it++) {
			int targmin = target - *it;

			if (hmap.count(targmin) > 0) {
				return {hmap[targmin], it - nums.begin()};
			} else {
				hmap.insert(make_pair(*it, it - nums.begin()));
			}
		}

		return {};
	}
};
