class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int ans =INT_MAX;
        int l ;   // number of elements completing target
        int sum = 0;
        for(int right = 0 ; right<nums.size();right++){
            sum+=nums[right];
            while(sum>=target){
                l = right-left+1;
                ans = min(ans,l);
                sum-=nums[left];
                left++;
            }
        }
        return ans==INT_MAX ?0:ans;
    }
};