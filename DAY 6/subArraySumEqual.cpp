class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            //checking if sum==k (count++)
            if(sum==k)count++;
            //Check if sum - k exists in the map. If it does, it means there is a subarray (ending at the current index) whose sum is k. Add the frequency of sum - k to count.
            if(mp.find(sum-k)!=mp.end())
            count +=mp[sum-k];
            //Increment the frequency of the current sum in the map.
            mp[sum]++;
        }
        return count;
    }
};