class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> numCount;
        for (int num:nums) {
            if (!numCount.contains(num)) {
                numCount.insert(num);
            }
            else {
                return true;
            }
        }
        return false;
    }
};