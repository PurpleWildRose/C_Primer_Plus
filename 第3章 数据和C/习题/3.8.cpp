#include <iostream>

#define B      2
#define ANS     8
#define TS      2
#define CS      3
using namespace std;

int main() {
    float be;
    cout << "Entry : \b";
    scanf("%f", &be);

    printf("品脱： %f\n", be / B);
    printf("盎司： %f\n", be * ANS);
    printf("汤勺： %f\n", be * ANS * TS);
    printf("茶勺： %f\n", be * ANS * TS * CS);

    return 0;
}