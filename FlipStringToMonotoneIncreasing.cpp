class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int ones = 0, flips = 0;
        for (auto c: s) {
            if (c=='0') {
                if (ones>0)
                    flips++;
            } 
            else 
                ones++;
            flips = min(flips,ones);
        }
        return flips;
    }
};