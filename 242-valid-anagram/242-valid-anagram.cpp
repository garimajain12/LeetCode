class Solution {
public:
    bool isAnagram(string s, string l) {
        if(s.length()!=l.length()){
            return 0;
        }
    sort(s.begin(),s.end());
    sort(l.begin(),l.end());    
        if(s==l){
            return true;
        }
        return false;
    }
};
        
        
        
            
        