
    bool solve(pair<string, int> &p1, pair<string, int> &p2){
        if(p1.second==p2.second)
            return p1.first<p2.first;
        
        return p1.second>p2.second;
    }
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
       int max_freq=0;
        map<string,int>mp;
        for(auto &i:words)
            max_freq=max(max_freq, ++mp[i]);
        vector<pair<string,int>> v;
        for(auto &i:mp)
            v.push_back(i);
        sort(v.begin(), v.end(), solve);
        vector<string> ans;
        for(auto &i:v){
            if(!k)
                break;
            ans.push_back(i.first), k--;
        }
        return ans;
    }
};


