#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    vector<pair<int,int>>vec;
    cout<<v[0]<<" "<<v[1]<<endl;
    vec.push_back({2,3});
    vec.emplace_back(4,5);
    cout<<vec[0].first<<" "<<vec[0].second<<endl;
    cout<<vec[1].first<<" "<<vec[1].second<<endl;
}
