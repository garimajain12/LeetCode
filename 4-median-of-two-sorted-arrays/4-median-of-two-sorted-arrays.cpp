class Solution {
public:
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
    for(int i=0;i<n2.size();i++){
        n1.push_back(n2[i]);
    }  
    sort(n1.begin(),n1.end());
      double med;
      int len= n1.size();
    
        if(len%2==0){
        med = (double)(n1[len/2]+ n1[len/2-1])/2;
    }
        else
    {
            med = n1[len/2];
    }
    
    return med;
}

};