class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string temp = "";
        int i = 0;
        int n = s.size();

        // Split the string s into words
        while (i < n) {
            if (s[i] != ' ') {
                temp += s[i];
            } else {
                words.push_back(temp);
                temp = "";
            }
            i++;
        }
        if (!temp.empty()) {
            words.push_back(temp);
        }

        // Check if the size of pattern and words vector match
        int s1 = pattern.size();
        int s2 = words.size();
        if (s1 != s2) return false;

        // Maps to store the pattern-to-word and word-to-pattern mappings
        map<char, string> mpp;
        map<string, char> reverse_mpp;

        for (int i = 0; i < s1; i++) {
            // If pattern character is not mapped yet
            if (mpp.find(pattern[i]) == mpp.end()) {
                // If word is also not mapped yet
                if (reverse_mpp.find(words[i]) == reverse_mpp.end()) {
                    mpp[pattern[i]] = words[i];
                    reverse_mpp[words[i]] = pattern[i];
                } else {
                    // If word is mapped but not to the current pattern character
                    if (reverse_mpp[words[i]] != pattern[i]) {
                        return false;
                    }
                }
            } else {
                // If pattern character is already mapped, check for consistency
                if (mpp[pattern[i]] != words[i]) {
                    return false;
                }
            }
        }

        return true;
    }
};