#include <bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

class Solution {
public:
    string reverseVowels(string s) {
        fast();
        string vowels;

        for (char c : s) {
            if (isVowel(c)) {
                vowels += c;
            }
        }
        
 
        int j = vowels.length() - 1;
        for (int i = 0; i < s.length(); ++i) {
            if (isVowel(s[i])) {
                s[i] = vowels[j--];
            }
        }
        return s;
    }

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};
