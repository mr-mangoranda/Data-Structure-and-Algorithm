#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Range-based for Loop
    //The foreach loop, also known as a range-based for loop , simplifies array traversal by directly accessing each element of the array without needing to manually manage the index. It is often used for its simplicity and readability when you just need to access or process each item in the array.
    
    for (int value : arr) {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}