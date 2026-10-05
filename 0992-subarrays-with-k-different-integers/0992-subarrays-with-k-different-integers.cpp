class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums , k) - atmost(nums,k-1);
    }
    int atmost(vector<int>& nums, int k){
        unordered_map<int ,int>mp;
        int count = 0;
        int l =0;

        for(int r =0; r<nums.size();r++){
            mp[nums[r]]++;
            while(mp.size() >k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;
            }
            count+=r-l+1;
        }
        return count;
    }
};