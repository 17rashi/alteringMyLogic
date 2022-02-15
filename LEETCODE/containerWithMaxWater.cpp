//https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int first=0,last=height.size()-1;
        int area=0,max_area=0;
        while(first<last){
            area=(min(height[first],height[last]))*(last-first);
            max_area=max(max_area,area);
            if(height[first]<height[last]){
                first++;
            }
            else{
                last--;
            }
        }
        return max_area;
    }
};