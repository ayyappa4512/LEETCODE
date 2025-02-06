class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                mpp[nums[i]*nums[j]]++;
            }
        }
        int cnt=0;
        for(auto it : mpp)
        {
            if(it.second>1)
            {
                cnt+=it.second*(it.second-1)*4;
            }
        }
        return cnt;
    }
};