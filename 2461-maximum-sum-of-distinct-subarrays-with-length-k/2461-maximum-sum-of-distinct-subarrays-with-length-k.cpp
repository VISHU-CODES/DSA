class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> st;
        long long ans = 0;
        long long sum = 0;
        int left = 0;

        for(int right = 0 ; right<nums.size();right++){
            while(st.count(nums[right])){
                st.erase(nums[left]);
                sum -= nums[left];
                left++;
            }
            st.insert(nums[right]);
            sum+= nums[right];

            if(right-left+1 ==k){
                ans = max(ans,sum);
                st.erase(nums[left]);
                sum-=nums[left];
                left++;
            }
        }
        return ans;
    }
};