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

// int main() 
// {
//     loop();
//     // Change file name
//     freopen("C:\\Users\\Owner\\Desktop\\IO\\senior_data\\s1\\a1.txt", "w", stdout);
//     for (int qad = 0; qad < filufiafslaf.size(); qad++)
//     {
//         // Change file name
//         string abracadabra = "C:\\Users\\Owner\\Desktop\\IO\\senior_data\\s1\\" + to_string(filufiafslaf[qad]) + ".in";
//         freopen(abracadabra.c_str(), "r", stdin);
//         ios::sync_with_stdio(0);
//         cin.tie(0);
//         // use fixed and setprecision() to print answer with decimals
        
//         long long int swiftsScore = 0; long long int semaphoresScore = 0;
//         long long n; cin >> n;
//         int k = 0;
        
//         vector<int> swift(n); vector<int> semaphore(n);
//         for (int i = 0; i < n; i++) {
//             cin >> swift[i];
//         }
//         for (int i = 0; i < n; i++) {
//             cin >> semaphore[i];
//         }

//         for (int i = 0; i < n; i++) {
//             swiftsScore += swift[i];
//             semaphoresScore += semaphore[i];
//             if (semaphoresScore == swiftsScore) {
//                 k = i+1;
//             }
//         }
        
//         cout << k << "\n";
//     }
// }

int main()
{
    loop();
    for (int qad = 0; qad < filufiafslaf.size(); qad++)
    {
        // Change file name
        string abracadabra = "C:\\Users\\Owner\\Desktop\\IO\\senior_data\\s1\\" + to_string(filufiafslaf[qad]) + ".out";
        freopen(abracadabra.c_str(), "r", stdin);
        // Change file name
        freopen("C:\\Users\\Owner\\Desktop\\IO\\senior_data\\s1\\a2.txt", "w", stdout);
        ios::sync_with_stdio(0);
        cin.tie(0);

        // scan and print input, seperated by spaces and then lines
        long long n; cin >> n; cout << n << "\n";
    }
}