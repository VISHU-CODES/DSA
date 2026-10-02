class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int l = 0 ;
        unordered_set<int>st;
        long long ans = 0;
        long long sum = 0;
       
        for(int r = 0 ;r<nums.size();r++){
            while(st.count(nums[r])){
                st.erase(nums[l]);
                sum-=nums[l];
                l++;
            }
            st.insert(nums[r]);
            sum+=nums[r];
            if(r-l+1 == k){
                ans=max(ans,sum);
                sum-=nums[l];
                st.erase(nums[l]);
                l++;
            }
        }
        return ans;
    }
};