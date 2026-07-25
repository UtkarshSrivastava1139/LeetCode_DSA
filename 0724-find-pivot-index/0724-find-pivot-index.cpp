class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return 0;

        int sumLeft = 0;
        int sumRight = 0;
        for(int i = 1; i<n; i++) sumRight += nums[i];

        if(sumLeft == sumRight) return 0;

        for(int j = 1; j<n; j++){
            //if(mid == 0 || mid == n-1) return -1l

            sumLeft += nums[j-1];
            sumRight -= nums[j];

            if(sumLeft == sumRight) return j;
            
        }

        return -1;


    }
};