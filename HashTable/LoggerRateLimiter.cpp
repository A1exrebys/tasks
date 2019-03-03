#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Logger {
public:
	Logger() {}

	bool shouldPrintMessage(int timestamp, string message) {
		if (!hmap.count(message)) {
			hmap[message] = timestamp;

			return true;
		} else {
			if (timestamp - hmap[message] < 10)
				return false;
			else {
				hmap[message] = timestamp;

				return true;
			}
		}
	}
private:
	unordered_map<string, int> hmap;
};
