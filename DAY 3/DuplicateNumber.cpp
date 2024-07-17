class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //OPTIMAL SOLUTION 
        //CHECK WITH NUMS[0]!=NUMS[NUMS[0]]

        while(nums[0]!=nums[nums[0]])
        {
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
    }
};