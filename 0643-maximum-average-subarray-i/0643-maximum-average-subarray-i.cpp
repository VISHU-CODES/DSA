class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        double avg = 0 ,sum = 0 , ans = INT_MIN;

        for(int right = 0 ; right<nums.size();right++){
            sum+=nums[right];
            if(right-left+1 == k){
                avg = sum/k;
                ans = max(ans,avg);
                sum-=nums[left];
                left++;
            }
        }
        return ans;
    }
};