long long getTrappedWater(long long* height, int n) {
    // Write your code here.
        long long water=0;
        int leftMax=0,rightMax=0;
        int maxHeight=height[0];
        int index=0;
        //finding Maximum Height
        for(int i=1;i<n;i++)
        {
            if(maxHeight<height[i])
            {
                maxHeight=height[i];
                index=i;
            }
        }
        //LEFT PART
        for(int i=0;i<index;i++)
        {
            if(leftMax>height[i])water+=leftMax-height[i];
            else leftMax=height[i];
        }
        
        //RIGHT PART
        for(int i=n-1;i>index;i--)
        {
            if(rightMax>height[i])water+=rightMax-height[i];
            else rightMax=height[i];
        }
        return water;
}