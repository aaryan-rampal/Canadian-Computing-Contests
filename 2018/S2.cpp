#include <bits/stdc++.h>
using namespace std;

int n; 

bool checkVector(vector<vector <int>> sunflowerGrowth)
{
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n; j++) {
            if (sunflowerGrowth[i][j] > sunflowerGrowth[i+1][j]) return false;
        }
    }

    return checkVertical(sunflowerGrowth) ? true : false;
}

bool checkVertical(vector<vector <int>> sunflowerGrowth) 
{
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n; j++) {
            if (sunflowerGrowth[i][j] > sunflowerGrowth[i+1][j]) return false;
        }
    }
}

int main() 
{
    // freopen("TEST.in", "r", stdin);
    // freopen("TEST.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    vector<vector <int>> sunflowerGrowth(n);
    for (int i = 0; i < n; i++) {
        vector<int> temp(n);
        for (int j = 0; j < n; j++) {
            cin >> temp[j];
        }
        sunflowerGrowth[i] = temp;
    }

    bool breakLoop = false;
    if (checkVector(sunflowerGrowth)) breakLoop = true;
    
    if(!breakLoop) {
        vector<vector <int>> sunflowerDup = sunflowerGrowth;
        // Flip the array on all sides and check when the values are descending
        for (int i = 0; i < 3; i++) {
           for (int row = 0; row < n; row++) {
               for (int col = 0; col < n; col++) {
                   sunflowerGrowth[row][col] = sunflowerDup[n - col - 1][i];
               }
           }
           if (checkVector(sunflowerGrowth)) break;
        }
    }
}