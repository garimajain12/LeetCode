class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0, right=0;
        int n=s.length();
        map<char, int>mp;
        int ans=0;
        while(right<n){
            mp[s[right]]++;
            while(mp[s[right]] >1 && left<=right){
                mp[s[left]]--;
                left++;
            }
            ans=max(ans, right-left+1);
            right++;
        }
        return ans;
    }
};

