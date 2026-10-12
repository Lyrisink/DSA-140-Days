#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> votes = {2, 5, 2, 1, 2, 5};
vector<int> cnt(6, 0);          // size 5+1 so that index 5 exists

for (int x : votes) {
    cnt[x]++;                   // candidate x gets one more vote
}

for (int i = 1; i <= 5; i++) {
    cout << "Candidate " << i << " received " << cnt[i] << " votes.\n";
}
// cnt[2] is 3, cnt[5] is 2, cnt[1] is 1, cnt[3] is 0
    return 0;
}