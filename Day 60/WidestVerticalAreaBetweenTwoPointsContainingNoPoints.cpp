class Solution {   //TC O(nlogn) SC O(1)
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int maxWidth= INT_MIN;
        for(int i=1;i<points.size();i++){
            maxWidth = max(maxWidth,points[i][0]-points[i-1][0]);
        }
        return maxWidth;
    }
};