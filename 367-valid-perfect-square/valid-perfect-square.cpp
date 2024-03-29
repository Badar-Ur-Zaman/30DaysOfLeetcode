class Solution {
public:
    bool isPerfectSquare(int num) {
        unsigned int i = 0;
        while((i*i) < num){
            i++;
        }
        if((i*i) == num){
            return true;
        }
        return false;
    }
};