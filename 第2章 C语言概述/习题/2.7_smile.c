// 编程练习： P33
#include <stdio.h>

int main() {
    for (int i = 3; i > 0; i--){ 
        for (int j = i; j > 0; --j) {
            printf("Smile!");
            if (j == 1) {
                printf("\n");
            }
        }
    }
}