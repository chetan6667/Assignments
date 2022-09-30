
  #include <iostream>
using namespace std;

int main() {
    int num, org, rem, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    org = num;

    while (org != 0) {

        remainder = org % 10;

        result += remainder * remainder * remainder;


        org /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}





