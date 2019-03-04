#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		unordered_map<string, int> hmap;
		vector<vector<string>> ret;

		for (auto& s : strs) {
			string ns = s;
			sort(ns.begin(), ns.end());

			if (hmap.count(ns)) {
				ret[hmap[ns]].push_back(s);
			} else {
				ret.push_back({s});
				hmap[ns] = ret.size() - 1;
			}
		}

		return ret;
	}
};
