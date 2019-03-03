#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX_LEN 100000

class HashMap {
public:
	HashMap() {}

	void put(int key, int value) {
		int index = GetHash(key);
		auto it = find_if(map[index].begin(), map[index].end(), [&key] (const pair<int, int>& el) {
					return el.first == key;
				});

		if (it == map[index].end()) {
			map[index].push_back(make_pair(key, value));
		} else {
			it->second = value;
		}
	}

	int get(int key) {
		int index = GetHash(key);
		auto it = find_if(map[index].begin(), map[index].end(), [&key] (const pair<int, int>& el) {
					return el.first == key;
				});

		if (it == map[index].end()) {
			return -1;
		} else {
			return it->second;
		}
	}

	void remove(int key) {
		int index = GetHash(key);
		auto it = find_if(map[index].begin(), map[index].end(), [&key] (const pair<int, int>& el) {
					return el.first == key;
				});

		if (it != map[index].end()) {
			map[index].erase(it);
		}
	}

private:
	vector<pair<int, int>> map[MAX_LEN];

	int GetHash(int key) {
		return key % MAX_LEN;
	}
};
