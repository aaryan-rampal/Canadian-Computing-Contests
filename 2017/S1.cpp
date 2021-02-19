#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);
#define input freopen("TEST.in", "r", stdin); freopen("TEST.out", "w", stdout);

int main() 
{
    fast

    long long int swiftsScore = 0; long long int semaphoresScore = 0;
    long long n; cin >> n;
    int k = 0;
    
    vector<int> swift(n); vector<int> semaphore(n);
    for (int i = 0; i < n; i++) {
        cin >> swift[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> semaphore[i];
    }

    for (int i = 0; i < n; i++) {
        swiftsScore += swift[i];
        semaphoresScore += semaphore[i];
        if (semaphoresScore == swiftsScore) {
            k = i+1;
        }
    }
    
    cout << k;
}