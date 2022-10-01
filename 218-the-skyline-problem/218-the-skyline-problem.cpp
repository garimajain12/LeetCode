class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& build) {
        vector<pair<int,int>> vt;
        vector<vector<int>> ans;
        for(auto it:build)
        {
            vt.push_back({it[0],-it[2]}); //leftWall
            vt.push_back({it[1],it[2]}); //rightWall
        }
        sort(vt.begin(),vt.end());
        multiset<int> mt{0};
        int top = 0; // record the height of skyLine
        for(auto itr:vt)
        {
            if(itr.second < 0)
            {
                mt.insert(-itr.second);
            }
            else
            {
                mt.erase(mt.find(itr.second));
            }
            if(*mt.rbegin() != top) // when top height changes then 
            {
                // cout<<itr.second<<" "<<top<<" ";
                top = *mt.rbegin();
                ans.push_back({itr.first,top});
            }
        }
        return ans;
    }
};