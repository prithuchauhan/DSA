// Question Link : https://leetcode.com/problems/reverse-bits/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        uint32_t reversed = 0;

        for (int i = 0; i < 32; i++) {
            reversed <<= 1;                      // shift left make space
            reversed |= n&1;                     // add least significant bit by OR
            n >>= 1;

        }

        return reversed;

    }
};
