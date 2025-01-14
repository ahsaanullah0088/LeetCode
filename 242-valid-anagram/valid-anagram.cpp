class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()){
            return false;
        }
        unordered_map<char , int> counts , countT;
        for(int i=0; i<s.size();i++){
            counts[s[i]] = 1+counts[s[i]];
            countT[t[i]] = 1+countT[t[i]];

        }
        for(auto & pair : counts){
            if(countT[pair.first] != pair.second){
                return false;
            }
        }
        return true;
    }
};