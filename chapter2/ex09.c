#include <stdio.h>
#include <stdlib.h>

int contabits(unsigned x);
int otimized_contabits(signed x);

int main()
{
    unsigned char x = 163;
    signed char x2 = -93;


    printf("%d\n", contabits(x));
    printf("%d\n", otimized_contabits(x2));
}

int contabits(unsigned x)
{
    // x = 1010 0011
    // 1 = 0000 0001
    //
    // & = 1
    // x >>= 1
    // x = 0101 0001
    // & = 1
    // x >>= 1
    // x = 0010 1000
    // & = 0
    // ...
    // x = 0000 0000 = 0

    int b;

    for(b = 0; x!= 0; x >>= 1)
        if(x & 1)
            b++;
    return b;
}

int otimized_contabits(signed x)
{
    // The two's complement number system is a mathematical operation on binary numbers, as well as a binary signed number representation. (Wikipedia)
    // one's complement is invert the second element of an operation.
    // x = 1010 0011 (signed) = -93
    // 1 = 0000 0001
    //
    // x &= (x - 1)
    // x = x & (x - 1)
    // (x - 1) = (x + (-1)) = -94 = 1010 0010
    // 1010 0011 & 1010 0010 = 1010 0010
    // x = 1010 0010
    // ...
    // 1010 0010 + 1111 1111 = 1 1010 0001
    // 1010 0010 & 1 1010 0001 = 1010 0000

    //Answer: Because it move the right-most 1 bit to left, and the operator AND turn it to 0.

    int total_bits = 0;

    while(x != 0){
        x &= (x-1);
        total_bits++;
    }

    return total_bits;
}
