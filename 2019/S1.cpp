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

static int files[] {1,2,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
int main() 
{

    for (int i = 1; i < 20; i++)
    {
        string x = files[i] < 10 ? "0" + to_string(files[i]) : to_string(files[i]);
        string str = "C:\\Users\\Owner\\Desktop\\2019 input and output\\all_data\\s1_j4\\j4." + x + ".in";
        freopen(str.c_str(), "r", stdin);
        freopen("C:\\Users\\Owner\\Desktop\\2019 input and output\\all_data\\s1_j4\\a1.txt", "w", stdout);
        ios::sync_with_stdio(0);
        cin.tie(0);

        vector<int> array {1,2,3,4};
        string flip; cin >> flip;
        for (int j = 0; j < flip.length(); j++)
        {
            if(flip[j] == 'H') horizontal(array);
            else vertical(array);
        }
        cout << array[0] << " " << array[1] << " " << array[2] << " " << array[3] << "\n\n";
    }
}

// int main()
// {
//     for (int i = 1; i < 18; i++)
//     {
//         string x = files[i] < 10 ? "0" + to_string(files[i]) : to_string(files[i]);
//         string str = "C:\\Users\\Owner\\Desktop\\2019 input and output\\all_data\\s1_j4\\j4." + x + ".out";
//         freopen(str.c_str(), "r", stdin);
//         freopen("C:\\Users\\Owner\\Desktop\\2019 input and output\\all_data\\s1_j4\\a2.txt", "w", stdout);
//         ios::sync_with_stdio(0);
//         cin.tie(0);

//         int a, y, z, b; cin >> a >> y >> z >> b;
//         cout << a << " " << y << " " << z << " " << b << "\n\n";
//     }
// }