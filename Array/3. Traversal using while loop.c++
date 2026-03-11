#include <iostream>
using namespace std;

int main () {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // size ng Array yung hinahanap kaya it would be 5 / 1
    int i = 0;

    while (i < n) { // 0 < 5 
        cout << arr[i] << " "; // startubg from index 0 na nag indicate ng i = 0
        i++;
    }

    cout << endl;

    return 0;
}