class Solution {
public:
    int findPeakElement(vector<int>& num) {
    int n=num.size();
    int l=1,h=n-1;
    
    if(n==1) return 0;
    if(num[0]>num[1]) return 0;
    if(num[n-1]>num[n-2]) return n-1;

    while(l<=h)
    {
      int mid = (l+h)/2;
      if(num[mid]>num[mid-1] && num[mid]>num[mid+1])
      {
        return mid;
      }
      else if(num[mid]<num[mid+1]) {
        l=mid+1;
      }
      else{
        h=mid-1;
      }
    }
    return -1;
    }
};