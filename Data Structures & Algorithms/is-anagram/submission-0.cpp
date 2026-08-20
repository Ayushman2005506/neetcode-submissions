class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        bool same=true;
        for(int i=0;i<s.size();i++){
            freq1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            freq2[t[i]]++;
        }
        for(auto x:freq1){
            if(freq1[x.first]!=freq2[x.first]){
                same=false;
                break;
            }
        }
        return same;
    }
};
