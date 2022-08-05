class Solution {
public:
    int longestPalindrome(string s) {
     map<char, int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        int count=0, ans=0;
        for(auto it: m){
            if(it.second%2==0){
                count+=it.second;
            } else if(ans==0){
                count+=it.second;
                ans++;
            } else{
                it.second-=1;
                count+=it.second;
            }
        }
        return count;
    }
};



  