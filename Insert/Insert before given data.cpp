#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40};
    int n = 4;
    int value = 30;
    int x = 25;

    int index = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == value) {
            index = i;
            break;
        }
    }

    if(index == -1) {
        cout << "Value not found!";
        return 0;
    }

    int pos = index;

    for(int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = x;
    n++;

    cout << "Array after insertion: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

