class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        //for(int i = 0; i<nums.size(); i++){
        //    if(seen.find(nums[i]) != seen.end()) return true;
         //   seen.insert(nums[i]);
       // }

        for(int i = 0; i<nums.size(); i++){
            if(seen.count(nums[i])) return true; //or if(seen.count(num[i] == 1)) return true;
            seen.insert(nums[i]);
        }

        return false;
    }
};