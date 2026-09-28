class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r= height.size()-1;
        int ans = 0;
        int w , h = 0;    // widht and height of the container
        while(l<r){
            h = min(height[l],height[r]);
            w = r-l;

            ans = max(ans,(w*h));
            if(height[l]<height[r])l++;
            else r--;

        }
        return ans;
    }
};