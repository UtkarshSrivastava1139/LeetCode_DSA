class Solution {
public:
    int bitwiseComplement(int n) {
        int power = 1;
        if(n==0) return 1;
        while(power<n){
            power *= 2;
        }
        if(power>n) return (power-n-1);
        else if(power==n) return (n-1);
    return 0;
    }
};