#include <bits/stdc++.h>
using namespace std;

void count_sort(int n, int arr[]){
    int m = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>m) m = arr[i];
    }

    int cnt[m+1]={0};

    for(int i=0; i<n; i++){
        cnt[arr[i]]++;
    }

    for(int i=0; i<n; i++) arr[i]=0;

    for(int idx=0,j=0;idx<m+1;idx++){
    while(cnt[idx]>0){
        arr[j]=idx; cnt[idx]--;j++;
    }}
}

int main() {
    int n = 7;
    int arr[]={3,1,9,7,1,2,4};

    count_sort(n,arr);

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    return 0;
}