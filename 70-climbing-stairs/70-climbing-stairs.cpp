class Solution {
public:
    int climbStairs(int n) {
        if(n<=0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
       int count=0;
        int x=1; int y=2;
      for(int i=2; i<n; i++){
       count=x+y;
       x=y;
       y=count;
      }
        return count;
    }
};