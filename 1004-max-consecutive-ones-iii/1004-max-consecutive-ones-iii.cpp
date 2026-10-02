class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int count0 = 0;
        int mx = 0;
        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] == 0) {
                count0++;
            }
            while(count0 > k) {
                if(nums[l]==0)count0--;
                l++;
            }
            mx = max(mx, r - l + 1);
        }
        return mx;
    }
};