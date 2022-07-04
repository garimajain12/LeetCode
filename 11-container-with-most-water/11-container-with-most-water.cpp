class Solution {
public:
    int maxArea(vector<int>& l) {
       
        int max_val=0;
        int min_val;
        int i=0; int j=l.size()-1;
        
        while(i<j){
            min_val=min(l[i],l[j])*(j-i);
            max_val=max(min_val,max_val);
            if(l[i]<l[j]){
                i++;
            } else{
                j--;
            }
        }
        return max_val;
    }
};