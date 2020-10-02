#include <stdio.h>

int main(void)
{
    unsigned int a = 60; // 0000 0000 0000 0000 0000 0000 0011 1100
    unsigned int b = 13; // 0000 0000 0000 0000 0000 0000 0000 1101
    int andResult, orResult, xorResult, flipResult, slResult, srResult, srResult4;

// AND (&) compares each bit looking for equality of TRUE
    // if bits in each position match, assign matching bit value into the postion
    // if bits don't match, assing zero in that position (false that both are true)
    andResult = a & b; // 0000 1100

// OR (|) looks to see if either bit is TRUE (1)
    orResult = a | b; // 0011 1101

// XOR (^) looks to see if one but NOT BOTH are TRUE
    xorResult = a ^ b; // 0011 0001

// "flip" or "negate" (~) is UNARY, it does not compare two things
    flipResult = ~a; // 1100 0011
                        // 128 postion = negative (-)
                        // so -64 + 2 + 1 = -61

// Shift Left (<<) moves bit values to the left by adding zeros at the right end
// bit values at the right are dropped out
// shift by 1 place moves bit in position 128 to position 1
    slResult = a << 2; // a = 0011 1100, shift left by 2 = 1111 0000 (240)
    srResult = a >> 1; // a = 0011 1100, shift right by 1 = 0001 1110 (30)
// Shift Right (>>) adds zeros at the left, dropping values off the right end
    srResult4 = a >> 4; // a = 0011 1100, shift right by 1 = 0000 0011 (3)

    printf("and is %d\n or is %d\n xor is %d\n flip is %d\n shiftLeft is %d\n shiftRight is %d\n shiftRight by 4 = %d\n", andResult, orResult, xorResult, flipResult, slResult, srResult, srResult4);

    return 0;

}