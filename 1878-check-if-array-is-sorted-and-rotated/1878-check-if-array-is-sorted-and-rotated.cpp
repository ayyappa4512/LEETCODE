class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[(i+1)%nums.size()] < nums[i]) cnt++;
            if(cnt>1) return false;
        }
        return true;
    }
};