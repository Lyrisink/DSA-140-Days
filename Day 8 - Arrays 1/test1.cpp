#include <bits/stdc++.h>
using namespace std;

int sum(int n, int arr[]){
    int s=0;
    for(int i=0; i<n; i++){
        s += arr[i];
    }
    return s;
}

int findMax(int n, int arr[]){
    int mx=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>mx) mx=arr[i];
    }
    return mx;
}

int findMin(int n, int arr[]){
    int mn=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<mn) mn=arr[i];
    }
    return mn;
}

void revArr(int n, int arr[]) {
    int i = 0, j = n - 1;
    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
    int n;
    cin>>n;
    int arr[10000];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int s = sum(n, arr);
    int mx= findMax(n, arr);
    int mn= findMin(n, arr);
    revArr(n, arr);

    cout<<"Sum:"<<s<<"\n"
        <<"Max:"<<mx<<"\n"
        <<"Min:"<<mn<<"\n";

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}