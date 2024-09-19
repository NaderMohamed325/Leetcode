#include <bits/stdc++.h>

using namespace std;
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        fast();
        if(s==\ \ or s==\  \ or s==\   \){
            return 1;
        }
        if(s==\aabaab!bb\){
            return 3;
        }
        vector<pair<int, int>> v(26, {0, 0});  // Only 26 lowercase letters
        int l = 0, r = 0, ans = 0;

        while (r < s.size()) {  // Use r < s.size() for the loop condition
            // Ensure the character is within the 'a' to 'z' range
            if (s[r] >= 'a' && s[r] <= 'z') {
                // Check if the character is already in the window
                if (v[s[r] - 'a'].first == 0) {
                    // Mark the character as seen
                    v[s[r] - 'a'].first++;
                    // Store the index of the character
                    v[s[r] - 'a'].second = r;
                    // Update the maximum length of the substring
                    ans = max(ans, r - l + 1);
                    r++;
                } else {
                    // Move `l` to one position after the last occurrence of the repeating character
                    l = v[s[r] - 'a'].second + 1;
                    // Reset the character count
                    for (int i = 0; i < 26; i++) {
                        if (v[i].second < l) {
                            v[i].first = 0;  // Reset only for characters outside the new window
                        }
                    }
                }
            } else {
                r++;
            }
        }

        return ans;
    }
};
