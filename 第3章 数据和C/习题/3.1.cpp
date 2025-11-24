#include <iostream>
using namespace std;

int main() {
    // 整数上/下溢
    cout << "int: " << sizeof(int) << endl;

    int32_t m = 0x7FFFFFFF;
    printf("int: %d\n", m);

    m += 1;
    printf("int: %d\n", m);

    int32_t n = 0x80000000;
    printf("int: %d\n", n);

    n -= 1;
    printf("int: %d\n", n);

    // 浮点数上/下溢
    cout << "float: " << sizeof(float) << endl;
    float F = 3.2e8;
    printf("int: %f\n", F * 1.0E33f);

    float f = 3.2E-8;
    printf("int: %f\n", f*1.0e-33F);


    return 0;
}
