#include <bits/stdc++.h>
using namespace std;

int binarySearch(int n, int arr[], int t) {
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2; //Optimised method
        if (arr[mid] == t) return mid;
        else if (t > arr[mid]) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

int main() {
    int n=7;
    int arr[]={-1,0,3,4,5,9,12}; //Sorted Array
    int target=binarySearch(n,arr,2);
    cout<<target<<"\n";
    return 0;
}