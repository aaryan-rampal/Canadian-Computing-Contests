#include <bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(0);cin.tie(0);

int main() 
{
    FAST    

    int n; cin >> n;
    vector<pair <int, int>> timePos(n);
    for (int i = 0; i < n; i++)
    {
        int x, y; cin >> x >> y;
        timePos[i] = make_pair(x, y);
    }
    sort(timePos.begin(), timePos.end());
    
    long double maxSpeed = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if ((long double)(abs(timePos[i+1].second - timePos[i].second)) / (abs(timePos[i+1].first - timePos[i].first)) > maxSpeed || i == 0) {
            maxSpeed = (long double)(abs(timePos[i+1].second - timePos[i].second)) / (abs(timePos[i+1].first - timePos[i].first));
        }
    }

    cout << maxSpeed;
}
