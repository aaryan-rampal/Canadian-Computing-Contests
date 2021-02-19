#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // These two lines allow the program to read input faster 
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    // Checking whether there is always a pair of low/high readings or the there is one extra low reading
    bool oddReading = n % 2 == 0 ? false : true;
    vector<int> readings(n); 
    for (int i = 0; i < n; i++) {
        cin >> readings[i];
    }

    // Sorting the readings since all the low tide readings are lower than all the high
    sort(readings.begin(), readings.end());

    // If there was one extra low reading, let n = n + 1 so that the next for loop the intended amount of times
    if (oddReading) {
        n++;
    }

    for (int i = 0; i < n/2; i++) {
        // If it's the last iteration and the readings were odd, print out the last singular reading 
        if (i == (n/2)-1 && oddReading) cout << readings[0];
        // Otherwise, print out the highest low reading and lowest high reading not printed already
        else cout << readings[(n/2)-1-i] << " " << readings[(n/2)+i] << " ";
    } 
}
