#include <bits/stdc++.h>
using namespace std;
void insertsort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int current =arr[];
        int j=i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
        
    }
    for (int  i = 0; i < n; i++)
    {
        cout<< arr[i];
    }
    
    
}

int main() {
    int arr[] = { -2, 3, 6, -7, 34 };
    int size = sizeof(arr) / sizeof arr[0];
    insertsort(arr, size);
    return 0;
}
