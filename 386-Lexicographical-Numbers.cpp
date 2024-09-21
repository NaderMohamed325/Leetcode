#include <bits/stdc++.h>

using namespace std;
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

class Solution {
public:
    vector<int> lexicalOrder(int n) {
        fast();
        set<string> s;
        for (int i = 1; i <= n; ++i) {
            s.insert(to_string(i));
        }
        vector<int> v;
        for (string str: s) {
            v.push_back(stoi(str));
        }
        return v;
    }
};