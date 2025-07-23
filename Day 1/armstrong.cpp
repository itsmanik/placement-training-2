    #include <iostream>
    #include <cmath>

    using namespace std;
    int main() {
        int num = 153;
        int temp, n = 0;
        double sum = 0;

        temp = num;
        while (temp != 0) {
            n++;
            temp = temp / 10;
        }

        temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            sum = sum + pow(digit, n);
            temp = temp / 10;
        }
        cout << sum;
        return 0;
    }