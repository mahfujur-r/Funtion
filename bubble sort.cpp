#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swaped = 0;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j + 1] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaped = 1;
            }
        }
        if (swaped == 0)
            break;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    int arr[] = { -2, 3, 6, -7, 34 };
    int size = sizeof(arr) / sizeof arr[0];
    bubblesort(arr, size);
    return 0;
}

