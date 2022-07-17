#include <stdio.h>

int main() {
    int input0 = 10;
    int input1 = 15;
    int output0 = 0;
    int output1 = 1;
    
     asm volatile("mov %[input0], %[output0]\t\n"
             "mov %[input1], %[output1]\t\n"
             : [output0] "=&r" (output0), [output1] "=r" (output1)
             : [input0] "r" (input0), [input1] "r" (input1)
             :);

    printf("output0: %d\n", output0);
    printf("output1: %d\n", output1);

    return 0;
}
