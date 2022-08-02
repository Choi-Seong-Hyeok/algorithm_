#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool compare(pair<int, double> a, pair<int, double> b) {
    if(a.second == b.second){
        return b.first > a.first;
    }
    else
        return a.second < b.second;

}
int main()
{
    int num = 0;
    vector <pair<int,int>> p;
    cin >> num;
    for(int i = 0;i<num;i++)
    {
        int x,y;
        cin>> x >> y ;
        p.push_back(make_pair(x,y));
    }
    sort(p.begin(),p.end(),compare);

    for(int i = 0;i<num;i++){
        cout<<p[i].first<<" "<<p[i].second<<'\n';
    }

}