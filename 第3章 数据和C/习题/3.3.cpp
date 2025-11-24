#include <iostream>
#include <string>

using namespace std;
int main() {
    std::string str = "Startled by the sudden sound, S  ally shouted, \n\"By the Great Pumpkin, what was that!\"";

    printf("\a%s\n", str.c_str());

    return 0;
}