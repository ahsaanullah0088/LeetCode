class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int result = 0;
        vector<int> charCount(26, 0);

        // Count the frequency of each character in `chars`
        for (char ch : chars) {
            charCount[ch - 'a']++;
        }

        // Iterate through each word
        for (string &word : words) {
            vector<int> wordCount(26, 0);

            // Count the frequency of each character in the current word
            for (char ch : word) {
                wordCount[ch - 'a']++;
            }

            // Check if the word can be formed using `chars`
            bool ok = true;
            for (int i = 0; i < 26; i++) {
                if (wordCount[i] > charCount[i]) {
                    ok = false;
                    break;
                }
            }

            // If the word can be formed, add its length to the result
            if (ok) {
                result += word.size();
            }
        }

        return result;
    }
};