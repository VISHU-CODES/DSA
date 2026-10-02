class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum = 0 , ans = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==1){
                sum++;
                ans = max(ans,sum);
            }
            else{
                sum = 0;
            }
        }
        return ans;
    }
};