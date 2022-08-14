class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;
        int n=s.size();
        int start=0,end=0;
       
        vector<int> c(26,0);
         int countChar=0;
         
        for(end=0;end<n;end++){
            c[s[end]-'A']++;
            countChar=max(countChar, c[s[end]-'A']);
            if(end-start+1-countChar>k){
                c[s[start]-'A']--;
                start++;
            }
            ans=max(ans,end-start+1);
        }
        return ans;
    }
};



