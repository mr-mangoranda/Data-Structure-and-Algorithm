#include <iostream>
using namespace std;

bool isEven (int n){
    int rem = n % 2;

    if (rem==0) {
        return true;
    }

    else {
        return false;
    }
    
}

int main() {
    int number;

    cout << "==============================" << endl;
    cout << "     Even / Odd Checker       " << endl;
    cout << "==============================" << endl;
    cout << "Enter a number: ";
    cin >> number;
    
    if (isEven(number)) {
        cout << "\nAnswer: Even";
    }

    else {
        cout << "Answer: Odd";
    }
}

