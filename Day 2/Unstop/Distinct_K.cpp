#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    vector<string>unique;
    for(int i=0; i<n; i++){
        bool isUnique=true;
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if(v[i]==v[j]) isUnique=false;
        }
        if(isUnique) unique.push_back(v[i]);
    }
    int num=unique.size();
    if(k>num) cout<<-1;
    else{
        cout<<unique[k-1];
    }

    return 0;
}