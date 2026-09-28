class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0 , r = height.size()-1;
        int lx = 0 , rx= 0;
        int water = 0;
        while(l<r){
            if(height[l]<height[r]){
                lx = max(lx,height[l]);
                water+= lx-height[l];
                l++;
            }
            else{
                rx = max(rx,height[r]);
                water += rx-height[r];
                r--;
            }
        }
        return water;
    }
};