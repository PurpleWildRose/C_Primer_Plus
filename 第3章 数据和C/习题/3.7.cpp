#include <iostream>
#define INC     2.54
using namespace std;

int main() {
    float height;
    cout <<"Please entry user height(inc): \b";
    scanf("%f", &height);

    printf("User height: %.2e\n", height * INC);

    return 0;
}
