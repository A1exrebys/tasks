#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
	vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
		unordered_map<string, int> maps;
		vector<int> sum(1, 0xFFFFFFF);
		vector<string> ret(1);

		for (int i = 0; i < list2.size(); i++) {
			if (!maps.count(list2[i]))
				maps[list2[i]] = i;
		}

		for (int i = 0; i < list1.size(); i++) {
			if (maps.count(list1[i])) {
				if (sum[0] > i + maps[list1[i]]) {
					sum[0] = i + maps[list1[i]];
					ret[0] = list1[i];
					ret.resize(1);
				} else if (sum[0] == i + maps[list1[i]]) {
					sum.push_back(i + maps[list1[i]]);
					ret.push_back(list1[i]);
				}
			}
		}

		return ret;
	}
};
