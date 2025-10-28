// 编程练习： P33
#include <stdio.h>

void br();
void ic();

int main() {
    br();
    printf(", ");
    ic();
    ic();
    br();
    printf("\n");

    return 0;
}

void br() {
    printf("Brazil, Russia");
}

void ic() {
    printf("India, China\n");
}