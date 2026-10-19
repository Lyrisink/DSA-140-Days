#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int n, int arr[]){      //Time Complexity: O(n^2)
    for(int i=0; i<n-1; i++){
        int si=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[si]) si=arr[j];
        }
        swap(arr[i], arr[si]);
    }
}

int main() {
    int n=5;
    int arr[] = {4,1,5,2,3};
    SelectionSort(n,arr);

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    return 0;
}