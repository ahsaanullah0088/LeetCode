class Solution {
public:
    string toLowerCase(string s) {
           for (auto &c : s) {
        c = tolower(static_cast<unsigned char>(c));
    } 
            return s;
    }
};