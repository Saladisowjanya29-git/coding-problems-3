#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Vector of int with different values
    vector<int> ve = {10, 20, 30, 40, 50, 60};

    cout << "Vector<int> elements:" << endl;
    cout << ve[0] << " " << ve[1] << " " << ve[2] << endl; // access directly
    cout << ve[3] << " " << ve[4] << " " << ve[5] << endl;

    // 2. Vector of pairs
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    vec.emplace_back(5,6);

    cout << "\nVector<pair<int,int>> elements:" << endl;
    cout << vec[0].first << " " << vec[0].second << endl;
    cout << vec[1].first << " " << vec[1].second << endl;
    cout << vec[2].first << " " << vec[2].second << endl;

    return 0;
}

