#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        char ch='A';
        ch = ch+i;
        for(int j=0;j<i+1;j++){
            
            cout<<ch;
            ch--;
        }
        
        cout<<"\n";
    }
    return 0;
}