#include <iostream>
#include<climits>
using namespace std;

int main() {
    int n, digit;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    cout << "Enter number: ";
    cin >> n;

    while (n > 0) {
        digit = n % 10;

        if (digit > largest) {
            secondLargest = largest;
            largest = digit;
        }
        else if (digit > secondLargest) {
            secondLargest = digit;
        }

        n /= 10;
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << secondLargest << endl;
    cout << "Maximum Product = " << largest * secondLargest << endl;

    return 0;
}
  
