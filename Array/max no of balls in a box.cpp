class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int i,j;
        int sum,x;
        int result=INT_MIN;
            unordered_map<int,int>mp;
        for(i=lowLimit;i<=highLimit;i++)
        {
            sum=0;
            x=i;
            while(x>0)
            {
                sum=sum+x%10;
                x=x/10;
            }
            mp[sum]++;
        }
        for(auto it:mp)
        {
            result=max(result,it.second);
        }
          return result;  
        
    }
};
