class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            std::string str = std::to_string(nums[i]); 
            int s = (str).length();
            if(s%2 == 0) count++;
        }
        return count;
    }
};