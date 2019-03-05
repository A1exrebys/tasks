#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

#define MAX_ASKII_CHAR_NUMBERS_OFFSET	(26)

class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        unordered_map<string, vector<string>> hmap;
        vector<vector<string>> output;

        for (string&  s : strings)
            hmap[key(s)].push_back(s);

        for (auto& m : hmap) {
            vector<string> group = m.second;
            output.push_back(group);
        }

        return output;
    }
private:
    string key(string& s) {
        string str;
        int n = s.length();

        for (int i = 1; i < n; i++) {
            int diff = s[i] - s[i - 1];

            if (diff < 0)
                diff += MAX_ASKII_CHAR_NUMBERS_OFFSET;

            str += 'a' + diff + ',';
        }

        return str;
    }
};
