#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<int> topKFrequent(vector<int>& nums, int k) {
		unordered_map<int, int> freq;
		vector<vector<int>> full(nums.size() + 1);
		vector<int> res;

		for (auto &n : nums)
			++freq[n];

		for (auto & [first, second] : freq)
			full[second].push_back(first);

		for (int i = nums.size(); i >= 0; i--) {
			for (int j = 0; j < full[i].size(); j++) {
				res.push_back(full[i][j]);

				if (res.size() == k)
					return res;
			}
		}

		return res;
	}
};

#if 0
class Solution {
public:
	vector<int> topKFrequent(vector<int>& nums, int k) {
		unordered_map<int, int> hnums;
		vector<int> ret;

		for (auto& num : nums) {
			if (hnums.count(num)) {
				hnums[num]++;
			} else {
				hnums[num] = 1;
			}
		}

		multimap<int, int> shnums;

		for (auto& num : hnums) {
			shnums.insert({num.second, num.first});
		}

		auto it = shnums.rbegin();

		for (int i = 0; i < k; i++, it++) {
			ret.push_back(it->second);
		}

		return ret;
	}
};
#endif
