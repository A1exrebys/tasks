#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		unordered_map<int, int> hmap;
		vector<int> res;

		for (int i = 0; i < nums1.size(); i++)
			hmap[nums1[i]]++;

		for (int i = 0; i < nums2.size(); i++) {
			if (hmap[nums2[i]] > 0) {
				res.push_back(nums2[i]);
				hmap[nums2[i]]--;
			}
		}

		return res;
	}
};

#if 0
class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());
		vector<int> res;

		auto first1 = nums1.begin();
		auto first2 = nums2.begin();
		auto last1 = nums1.end();
		auto last2 = nums2.end();

		while (first1 != last1 && first2 != last2) {
			if (*first1 < *first2)
				first1++;
			else if (*first2 < *first1)
				first2++;
			else {
				res.push_back(*first1);
				first1++;
				first2++;
			}
		}

		return res;
	}
};
#endif
