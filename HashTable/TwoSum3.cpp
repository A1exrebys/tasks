#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class TwoSum {
public:
	/** Initialize your data structure here. */
	TwoSum() {}

	/** Add the number to an internal data structure.. */
	void add(int number) {
		if (hmap.count(number)) {
			hmap[number]++;
		} else {
			hmap.insert({number, 1});
		}
	}

	/** Find if there exists any pair of numbers which sum is equal to the value. */
	bool find(int value) {
		for (auto& [val, freq] : hmap) {
			int supl = value - val;

			if (supl == val && freq < 2)
				continue;

			if (hmap.count(supl))
				return true;
		}

		return false;
	}

private:
	unordered_map<int, int> hmap;
};
