class Solution {
public:
    bool isPerfectSquare(int num) {

        int l=0,h=num;
        long i=0;
        while(l<=h)
        {
            long mid = (l+h)/2;

            if(mid*mid==num)
            {
                return true;
            }
            else if(mid*mid<num)
            {
                l=mid+1;
            }
            else{
                h=mid-1;
            }

            i++;
        }
        return false;
    }
};