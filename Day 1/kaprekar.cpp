#include <iostream>

using namespace std;
int main() {
    int num = 27364;
    int square = num * num;
    int length = 0;
    int temp = num;
    while (temp != 0) {
        length++;
        temp /= 10;
    }
    int secondPartLength = length - (length / 2);
    int secondPart;
    int place = 1;
    while (secondPartLength != 0) {
        int digit = num / 10;
        secondPart = secondPart + (digit*place);
        secondPartLength--;
    }
    cout << secondPart;
    return 0;
}