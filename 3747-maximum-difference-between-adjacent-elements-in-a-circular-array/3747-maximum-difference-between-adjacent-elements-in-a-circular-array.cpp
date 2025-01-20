class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int maxi = abs(nums[0]-nums[n-1]);
        for(int i=0;i<n-1;i++)
        {
            maxi=max(maxi,abs(nums[i]-nums[i+1]));
        }
        return maxi;
    }
};