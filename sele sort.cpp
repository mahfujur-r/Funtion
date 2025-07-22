#include <bits/stdc++.h>
using namespace std;
void selsort(int arr[],int n){

    for (int i = 0; i < n-1; i++)
    {
        int min=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[min]>arr[j]){
                min=j;

            }
        }
        int tem=arr[min];
        arr[min]=arr[i];
        arr[i]=tem;

        
    }
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    
    
}

int main() {
    int arr[] = { -2, 3, 6, -7, 34 };
    int size = sizeof(arr) / sizeof arr[0];
    selsort(arr, size);
    return 0;
}
