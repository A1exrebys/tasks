#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		unordered_set<int> hset1;
		unordered_set<int> hset2;
		vector<int> res;

		for (auto& n : nums1) {
			if (!hset1.count(n))
				hset1.insert(n);
		}

		for (auto& n : nums2) {
			if (!hset2.count(n))
				hset2.insert(n);
		}

		for (auto& n : hset1) {
			if (hset2.count(n))
				res.push_back(n);
		}

		return res;
	}
};
