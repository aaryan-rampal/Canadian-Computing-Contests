#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);
#define input freopen("TEST.in", "r", stdin); freopen("TEST.out", "w", stdout);

int main() 
{
    fast //input 

    int n, k; cin >> n >> k;
    vector<long long> score (n);
    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }
    sort(score.begin(), score.end());

    int limit = ceil((long double)n/k);
    long long sum = 0;
    for (int i = n-1; i > n-limit-1; i--) {
        sum += score[i];
    }

    cout << sum; 
}