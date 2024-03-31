class Solution {
public:
    int fib(int n) {
        if(n == 2 || n == 1){
            return 1;
        }else if(n == 0){
            return 0;
        }
        int curr = 1, prev = 0, sum = 0;
        int iter = 1;
        while(iter != n){
            sum = curr + prev;
            prev = curr;
            curr = sum;
            iter++;
        }
        return sum;
    }
};