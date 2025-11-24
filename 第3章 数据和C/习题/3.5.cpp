#include <iostream>

#define SEC     3.156E7
using namespace std;

int main() {
    float user_sec;

    cout << "Please entry your age: \b";
    scanf("%f", &user_sec);

    printf("User age sec: %.08e \n", user_sec * SEC);

    return 0;
}