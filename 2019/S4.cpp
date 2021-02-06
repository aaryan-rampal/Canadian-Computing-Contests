#include <bits/stdc++.h>
using namespace std;

static vector<int> filufiafslaf;
// Edit this to include the file size
static int dfsahuiyolfdsioh = 43;

void loop()
{
    for (int i = 1; i < dfsahuiyolfdsioh+1; i++) {
        filufiafslaf.push_back(i);
    }
}

// int main() 
// {
//     loop();
//     for (int qad = 0; qad < filufiafslaf.size()-1; qad++)
//     {
//         // Change file name
//         // string abracadabra = "C:\\Users\\Owner\\Desktop\\IO\\all_data\\s4\\" + to_string(filufiafslaf[qad]) + " .in";
//         freopen(abracadabra.c_str(), "r", stdin);
//         // Change file name
//         // freopen("C:\\Users\\Owner\\Desktop\\IO\\all_data\\s4\\a1.txt", "w", stdout);
//         ios::sync_with_stdio(0);
//         cin.tie(0);

//         int n, k; cin >> n >> k;
//         vector<long long> score (n);
//         for (int i = 0; i < n; i++) {
//             cin >> score[i];
//         }
//         sort(score.begin(), score.end());

//         int limit = ceil((long double)n/k);
//         long long sum = 0;
//         for (int i = n-1; i > n-limit-1; i--) {
//             sum += score[i];
//         }

//         cout << sum << "\n\n"; 
//     }
// }

int main()
{
    loop();
    freopen("C:\\Users\\Owner\\Desktop\\IO\\all_data\\s4\\a2.txt", "w", stdout);
    for (int qad = 0; qad < filufiafslaf.size(); qad++)
    {
        // Change file name
        string abracadabra = "C:\\Users\\Owner\\Desktop\\IO\\all_data\\s4\\" + to_string(filufiafslaf[qad]) + " .out";
        freopen(abracadabra.c_str(), "r", stdin);
        // Change file name
        ios::sync_with_stdio(0);
        cin.tie(0);

        // scan and print input, seperated by spaces and then lines
        unsigned long long bruh; cin >> bruh; cout << bruh << "\n\n";
    }
}