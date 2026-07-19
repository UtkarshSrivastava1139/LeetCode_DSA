class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        int temp = num;
        while(temp>0){
            sum = sum + (temp%10);
            temp = temp/10;
        }
        if(sum<10){
            return sum;
        }
        else{
            return(addDigits(sum));
        }
        return 0;
    }
};