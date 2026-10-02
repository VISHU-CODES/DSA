class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int l =0;
        int count = 0 ;
        long long pro = 1;
        for(int r = 0 ; r<nums.size();r++){
            pro*=nums[r];
            while(pro>=k){
                pro/=nums[l];
                l++;
            }
            count+= r-l+1;
        }
        return count;
    }
};