class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        //Using bit manipulation
        uint32_t result=0;
        for(int i = 0; i < 32; i++){
            result <<= 1; //right shift by 1 bit
            if(n&1){
                result++;
            }
            n >>=1; // left shift by 1
        }
        return result;
    }
};