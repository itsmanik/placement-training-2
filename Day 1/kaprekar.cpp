#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int num = 2025;
    int square = num * num;
    int length = 0;
    int temp = num;
    while (temp != 0) {
        length++;
        temp /= 10;
    }
    temp = num;
    int secondPartLength = length - (length / 2);
    int firstPartLength = length - secondPartLength;
    int firstPart = temp / pow(10, secondPartLength);
    int power = pow(10, firstPartLength + 1);
    temp = num;
    int secondPart = temp % power;
    int sum = firstPart + secondPart;
    cout << firstPart + secondPart;
    return 0;
}