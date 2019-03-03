#include <iostream>
#include <vector>

using namespase std;

#define HASH_SIZE	100000

class HashSet
{
public:
	HashSet() {}

	void add(int item) {
		int ind = GetHash(item);
		auto it = find(hset[ind].begin(), hset[ind].end(), item);

		if (it == hset[ind].end())
			hset[ind].push_back(item);
	}

	void remove(int item) {
		int ind = GetHash(item);
		auto it = find(hset[ind].begin(), hset[ind].end(), item);


		if (it != hset[ind].end())
			hset[ind].erase(it);
	}

	bool containts(int item) {
		int ind = GetHash(item);
		auto it = find(hset[ind].begin(), hset[ind].end(), item);

		return it != hset[ind].end();
	}

private:
	vector<int> hset[HASH_SIZE];

	int GetHash(int item) {
		return item % HASH_SIZE;
	}
};