#include <bits/stdc++.h>
using namespace std;

void horizontal(vector<int> &array)
{
    int temp = array[0]; int temp1 = array[1];
    array[0] = array[2]; array[1] = array[3];
    array[2] = temp; array[3] = temp1;
}

void vertical(vector<int> &array)
{
    int temp = array[0]; int temp1 = array[2];
    array[0] = array[1]; array[2] = array[3];
    array[1] = temp; array[3] = temp1;
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> array {1,2,3,4};
    string flip; cin >> flip;
    for (int j = 0; j < flip.length(); j++)
    {
        if(flip[j] == 'H') horizontal(array);
        else vertical(array);
    }
    cout << array[0] << " " << array[1] << " " << array[2] << " " << array[3];
}