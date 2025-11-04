#include <stdio.h>

int main() {
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybit = 1234567890;

    printf("un = %u and not %d \n", un, un);
    printf("end = %hd and %d \n.", end, end);
    // printf("big = %ld and not %hd .\n", big, big);
    // printf("ver = %lld and not %ld .\n", verybit, verybit);

    return 0;
}