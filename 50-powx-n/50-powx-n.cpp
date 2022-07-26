class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long res=n;
        if(res<0){
            res=-1*res;
        } while(res){
            if(res%2){
                ans=ans*x;
                res=res-1;
            }else{
                x=x*x;
                res=res/2;
            }
        }
        if(n<0){
            ans=(double)(1.0) /(double)(ans);
        }
        return ans;
        
    }
};