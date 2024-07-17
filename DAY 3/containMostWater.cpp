class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        // to find maximum rectangle area
        int maxArea=0;
        while(i<j)
        {
            int h=min(height[i],height[j]);
            int width=j-i;
            //finding each area
            int Area=h*width;
            maxArea=max(maxArea,Area);
            if(height[i]<height[j])i++;
            else j--;
        }
        return maxArea;
    }
};