class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;

        for(int r = 0; r < nums.size(); r++) {

            // Remove index which is outside the window
            while(!dq.empty() && dq.front() <= r - k) {
                dq.pop_front();
            }

            // Remove smaller elements from back
            while(!dq.empty() && nums[dq.back()] <= nums[r]) {
                dq.pop_back();
            }

            // Add current index
            dq.push_back(r);

            // When window size becomes k, store maximum
            if(r >= k - 1) {
                ans.push_back(nums[dq.front()]);
            }
        }

        return ans;        
    }

};