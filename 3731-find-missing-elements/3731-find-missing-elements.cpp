class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        vector<int> nums2(nums);

        sort(nums2.begin(), nums2.end());

        int start = nums2[0]; 
        int end = nums2[nums.size()-1]; 
        int i = 0;
        while(start<end){
            if(nums2[i] == start){
                start++;
                i++;
            }
            else{
                res.push_back(start);
                start++;
            }
        }

        return res;
    }
};