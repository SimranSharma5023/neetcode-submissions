class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int p=0, q=nums.size() - 1;
        vector<int>ans;

        while(p<=q) {
            if(nums[p]*nums[p]>nums[q]*nums[q]) {
                ans.push_back(nums[p]*nums[p]);
                p++;
            } else{
                ans.push_back(nums[q]*nums[q]);
                q--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};