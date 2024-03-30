class Solution {
public:
    int getSum(int a, int b) {
        int carry, sumWithoutCarry, actualCarry;
        carry = a & b;
        sumWithoutCarry = a ^ b;

        actualCarry = carry << 1;

        while(actualCarry != 0){
            carry = sumWithoutCarry & actualCarry;
            sumWithoutCarry = sumWithoutCarry ^ actualCarry;
            actualCarry = carry << 1;
        }
        return sumWithoutCarry;
    }
};