#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

bool compare(string a,string b){
    if(a.length() == b.length()){
        return a<b;
    }
    else {
        return a.length() < b.length();
    }
}
int main()
{
    vector<string> v;
    int total_num;
    cin >> total_num;
    for(int i = 0;i<total_num;i++){
        string st;
        cin>>st;
        v.push_back(st);
    }
    sort(v.begin(),v.end(),compare);
    for(int i = 0;i<total_num;i++){
        if(i>0 && v[i] == v[i-1]){
            continue;
        }
        cout << v[i] << '\n';
    }
}