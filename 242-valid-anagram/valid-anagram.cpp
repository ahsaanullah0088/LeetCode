class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()){
            return false;
        }
        unordered_map<char , int> counts , countT;
        for(int i=0; i<s.size();i++){
            counts[s[i]] ++;
            countT[t[i]] ++;
        }

        for(int i=0; i<counts.size(); i++){
            if(counts[i] != countT[i]) return false;
        }
        return true;
    }
};