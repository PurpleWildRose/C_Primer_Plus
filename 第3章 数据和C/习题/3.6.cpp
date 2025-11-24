#include <iostream>

#define WATER_QUA   3.0e-23
#define K_WATER     950

using namespace std;

int main() {
    int m;
    cout << "Entry user need water(k): \b";
    scanf("%d", &m);

    printf("Water : %.5e\n", (m * K_WATER)/WATER_QUA);

    return 0;
}