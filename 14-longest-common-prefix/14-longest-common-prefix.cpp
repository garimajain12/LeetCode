class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
       int n=s.size();
        string res;
        sort(s.begin(), s.end());
        string start=s[0];
        string end=s[n-1];
        
        for(int i=0; i<s[0].size(); i++){
            if(start[i]==end[i]){
                res.push_back(start[i]);
            } else{
                break;
            }
        }
        return res;
    }
};
    
    
    