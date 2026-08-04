class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> one(1,1);
        result.push_back(one);
        for(int i = 1; i<numRows; i++){
            vector<int> num(i+1, 1);
            for(int j = 1; j<i; j++){
                num[j] = result[i-1][j] + result[i-1][j-1];
            }
            result.push_back(num);
        }
        return result;
    }
};