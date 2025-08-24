class Solution {
public:
    int mySqrt(int x) {
        int l=0,h=x;
        int ans=0;
        while(l<=h)
        {
         long m=(l+h)/2;
         if(m*m<=x)
         {
            ans=m;
            l=m+1;
         }
         else{
            h=m-1;
         }
            
        }
        return ans;
    }
};