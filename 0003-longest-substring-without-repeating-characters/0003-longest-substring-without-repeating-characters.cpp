class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> st;
        int ans = 0;
        int l = 0; // length
        int left = 0;
        for(int right = 0 ;right<s.size();right++){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            l = st.size();
            ans = max(ans,l);
        }
        return ans;
    }
};