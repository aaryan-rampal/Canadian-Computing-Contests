#include <bits/stdc++.h>
using namespace std;

// // Edit this to include the names of the file numbers
// static vector<int> filufiafslaf {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

// int main() 
// {
//     for (int qad = 0; qad < filufiafslaf.size(); qad++)
//     {
//         string abracadabra = "C:\\Users\\Owner\\Desktop\\WLOOINPUT\\all_data\\senior_data\\s1\\" + to_string((qad+1)) + ".in";
//         freopen(abracadabra.c_str(), "r", stdin);
//         // Change file name
//         freopen("C:\\Users\\Owner\\Desktop\\WLOOINPUT\\all_data\\senior_data\\s1\\a1.txt", "w", stdout);
//         ios::sync_with_stdio(0);
//         cin.tie(0);

//         int n; cin >> n;
//         double long maxSpeed = 0; double long speed;
//         int lastTime, lastPosition;

//         for (int i = 0; i < n; i++) {
//             int t, x; cin >> t >> x;
//             speed = abs(((double long)(x-lastPosition)/(t-lastTime)));

//             if(i != 0 && speed > maxSpeed) 
//                 maxSpeed = speed;
//             lastTime = t; lastPosition = x; 
//         }

//         cout << setprecision(2) << maxSpeed << "\n\n";
//     }
// }

// int main()
// {
//     for (int qad = 1; qad < filufiafslaf.size(); qad++)
//     {
//         // Change file name
//         string abracadabra = "C:\\Users\\Owner\\Desktop\\WLOOINPUT\\all_data\\senior_data\\s1\\" + to_string((qad+1)) + ".out";
//         freopen(abracadabra.c_str(), "r", stdin);
//         // Change file name
//         freopen("C:\\Users\\Owner\\Desktop\\WLOOINPUT\\all_data\\senior_data\\s1\\a2.txt", "w", stdout);
//         ios::sync_with_stdio(0);
//         cin.tie(0);

//         // scan and print input, seperated by spaces and then lines
//         int x; cin >> x; cout << x << "\n\n";
//     }
// }

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<pair <long long, long long>> posTime;
    
    for (int i = 0; i < n; i++) {
        long long currentTime, currentPos; cin >> currentTime >> currentPos;
        posTime.push_back(make_pair(currentPos, currentTime));
    }

    sort(posTime.begin(), posTime.end());
    long long lastPos = posTime[0].first; long long lastTime = posTime[0].second;

    double maxSpeed = 0;
    for (int i = 1; i < n+1; i++) {
        double speed = abs(((double)(posTime[i].first - lastPos) / (posTime[i].second - lastTime)));
        if(i == 1 || speed > maxSpeed) maxSpeed = speed;
    }

    cout << maxSpeed;
}