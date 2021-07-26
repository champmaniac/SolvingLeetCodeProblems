class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // return edges[0][0]== edges[1][0] || edges[0][0]== edges[1][1] ? edges[0][0] : edges[0][1];
        
                                                        // TC -- O(1) SC --O(1)
        int a = edges[0][0];
        int b = edges[0][1];
        int c = edges[1][0];
        int d = edges[1][1];
        
        if(a == c || a == d) return a;
        return b;
    }
};