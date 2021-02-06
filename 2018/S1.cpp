#include <bits/stdc++.h>
using namespace std;

static vector<int> filufiafslaf;
// Edit this to include the file size
static int dfsadsfasfsf = 15;

void loop()
{
    for (int i = 1; i < dfsadsfasfsf+1; i++) {
        filufiafslaf.push_back(i);
    }
}

int main() 
{
    loop();
    // Change file name
    freopen("C:\\Users\\Owner\\Desktop\\IO\\windows_data\\S1\\a1.txt", "w", stdout);
    for (int qad = 0; qad < filufiafslaf.size()-1; qad++)
    {
        // Change file name
        string abracadabra = "C:\\Users\\Owner\\Desktop\\IO\\windows_data\\S1\\" + to_string(filufiafslaf[qad]) + " .in";
        freopen(abracadabra.c_str(), "r", stdin);
        ios::sync_with_stdio(0);
        cin.tie(0);

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
}

// int main()
// {
//     loop();
//     for (int qad = 0; qad < filufiafslaf.size()-1; qad++)
//     {
//         // Change file name
//         string abracadabra = "C:\\Users\\Owner\\Desktop\\IO\\windows_data\\S1\\" + to_string(filufiafslaf[qad]) + " .out";
//         freopen(abracadabra.c_str(), "r", stdin);
//         // Change file name
//         freopen("C:\\Users\\Owner\\Desktop\\IO\\windows_data\\S1\\a2.txt", "w", stdout);
//         ios::sync_with_stdio(0);
//         cin.tie(0);

//         // scan and print input, seperated by spaces and then lines
//         long double n; cin >> n; cout << fixed << n << "\n";
//     }
// }