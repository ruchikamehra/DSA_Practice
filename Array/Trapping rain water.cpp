class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>right(n);
        
     vector<int>left(n);
        int sum=0;
        int maxleft=height[0];
        int maxright=height[n-1];
        left[0]=0;
        right[n-1]=0;
for(int i=1;i<n;i++)
{
   left[i]=maxleft;
    maxleft=max(maxleft,height[i]);
}
for(int k=n-2;k>=0;k--)
{
    right[k]=maxright;
    maxright=max(maxright,height[k]);
}
        for(int i=1;i<n;i++)
   {
            if(right[i]>height[i] && left[i]>height[i])
            {
            sum=sum+min(left[i],right[i])-height[i];
            }
            
        }
    return sum;
    }
};
