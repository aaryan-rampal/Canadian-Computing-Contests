// Honestly, I have no care about testing this since there are multiple answers for each test case

#include <bits/stdc++.h>
using namespace std;

bool isItPrimeMethod(int aDup)
{
    // 1 and even numbers cannot be prime
    if(aDup == 1 || aDup % 2 == 0) return false;

    int y = 3; int limit = ceil((long double)sqrt(aDup));
    while (true) {
        // If the number is a multiple of something that's not itself, it's not prime
        if(aDup % y == 0 && aDup != y) return false;
        else y += 2;

        if(y >= limit) return true;
    }
}

int findTwoPrimes(int a)
{
    int i = 0; int aDup;
    while(a-i != 1) {
        aDup = a - i;
        bool isItPrime = isItPrimeMethod(aDup);
        if(isItPrime && isItPrimeMethod(a-aDup)) break;
        i++;
    }
    return aDup;
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        int prime1 = findTwoPrimes(n*2);
        cout << prime1 << " " << (n*2)-prime1 << "\n";
    }
}