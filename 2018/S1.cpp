#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
//    freopen((s + ".in").c_str(), "r", stdin);
//    freopen((s + ".out").c_str(), "w", stdout);
}

int main() 
{
    setIO("");

    int n; cin >> n;
    vector<int> villages(n);
    for (int i = 0; i < n; i++) {
        cin >> villages[i];
    }
    sort(villages.begin(), villages.end());

    long double minDistance;
    for (int i = 1; i < n-1; i++) {
        long double distance = 0;
        distance += (long double)abs(villages[i] - villages[i-1]) / 2;
        distance += (long double)abs(villages[i] - villages[i+1]) / 2;
        if (i == 1) minDistance = distance;
        minDistance = min(minDistance, distance);
    }
    
    cout << fixed << setprecision(1) << minDistance << "\n";  
}