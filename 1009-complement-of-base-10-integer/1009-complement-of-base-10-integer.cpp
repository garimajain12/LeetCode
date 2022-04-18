class Solution {
public:
    int bitwiseComplement(int x) {
        int y=x;
        
        int m=0;
        
        if(x==0){
            return 1;
        }
        while(y!=0){
            m= (m<<1) | 1;
            y=y>>1;
        }
            int ans=(~x)&m;
            return ans;
    }
};