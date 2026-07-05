class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr(2);
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum = 0;
            for(int j = i+1; j<nums.size(); j++){
                sum = nums[i] + nums[j];
                if(sum == target){
                    arr[0] = i;
                    arr[1] = j;
                    return arr;
                }
            }
            
        }
        return arr;
    }
};