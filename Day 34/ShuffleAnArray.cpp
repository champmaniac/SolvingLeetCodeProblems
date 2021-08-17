class Solution { //Fisher–Yates shuffle algorithm
    vector<int> original;
    vector<int> shuffled;
    int n;
public:
    Solution(vector<int>& nums) {
        original=shuffled=nums;
        n=nums.size();
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return original;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        int x=rand()%n;
        int y=rand()%n;
        swap(shuffled[x],shuffled[y]);
        return shuffled;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */