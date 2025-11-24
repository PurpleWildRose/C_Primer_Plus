#include <iostream>

using namespace std;

int main() {
    float m;

    cout << "Please entry a number: \b";
    scanf("%f", &m);

    printf("fixed-point notation: %.06f .\n", m);
    printf("exponential notation: %.06e .\n", m);

    return 0;
}