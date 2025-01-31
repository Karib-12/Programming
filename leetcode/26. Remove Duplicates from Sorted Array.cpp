/// The solution is for leetcode only.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        };

        int id = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[id]) {
                id++;
                nums[id] = nums[i];
            }
        }

        return id+1;
    }
};