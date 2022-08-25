class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int>m;
        map<char, int>m1;
        for(int i=0;i<magazine.size();i++){
            m[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.size();i++){
            m1[ransomNote[i]]++;
        }
        for(auto x: m1){
            if(x.second>m[x.first]){
                return 0;
            }
        }
        return 1;
    }
};