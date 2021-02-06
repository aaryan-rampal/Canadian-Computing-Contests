#include <bits/stdc++.h>
using namespace std;

void survey(vector<pair <int, int>> passengerAndLine, int l, int r) 
{
    unsigned long long sum = 0;
    // starts at l-1 but ends at r since if i wanted to count from 1 to 5, it'd be the same as int i = (1-1); i < 5
    for (int i = l-1; i < r; i++) {
        sum += passengerAndLine[i].first;
    }
    cout << sum << "\n";
}

vector<int> incrementStations(vector<int> stationsOnLine) {
    vector<int> temp = stationsOnLine;
    for (int i = 0; i < stationsOnLine.size(); i++) {
        // basically adds 1 to the train station number but it has to make sure that the train at the last station in the line goes to the first station in the line
        if (i == stationsOnLine.size()-1) stationsOnLine[0] = temp[i];
        else stationsOnLine[i+1] = temp[i];
    }
    return stationsOnLine;
}

vector<pair <int, int>> findAllStations(vector<pair <int, int>> passengerAndLine, int n, int x) {
    vector<int> stationsOnLine;
    for (int i = 0; i < n; i++) {
        // this vector will contain all the stations on the line we need
        if (passengerAndLine[i].second == x) stationsOnLine.push_back(passengerAndLine[i].first);
    }
    // increments all the trains
    stationsOnLine = incrementStations(stationsOnLine);

    int index = 0;
    for (int i = 0; i < n; i++) {
        if (passengerAndLine[i].second == x) {
            // changes the actual vector pair to reflect the train's index
            passengerAndLine[i].first = stationsOnLine[index];
            index++;
        }
    }
    return passengerAndLine;
}

int main() 
{
    freopen("C:\\Users\\Owner\\Desktop\\IO\\senior_data\\s5\\1.in", "r", stdin);
    freopen("C:\\Users\\Owner\\Desktop\\broletsgo.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, q; cin >> n >> m >> q;
    vector<int> line(n);
    for (int i = 0; i < n; i++) {
        cin >> line[i];
    }
    vector<int> passenger(n);
    for (int i = 0; i < n; i++) {
        cin >> passenger[i];
    }

    vector<pair <int, int>> passengerAndLine(n);
    for (int i = 0; i < n; i++) {
        passengerAndLine[i] = make_pair(passenger[i], line[i]);
    }
    

    for (int z = 0; z < q; z++) {
        int action; cin >> action;
        if (action == 1) {
            // scan l and r since i can't scan them in the function apparently
            int l, r; cin >> l >> r;
            survey(passengerAndLine, l, r);
        } else {
            // scan x for same reason
            int x; cin >> x;
            passengerAndLine = findAllStations(passengerAndLine, n, x);
        }
    }
}
