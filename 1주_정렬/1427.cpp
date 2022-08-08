#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
bool comp(int a,int b){
    return a > b;
}

int main()
{
    vector<int> v;
    string str;
    getline(cin,str);
    int size_num = str.size();
    for(int i = 0;i<size_num;i++){
        int num;
        string s;
        s= str[i];
        num = stoi(s);
        v.push_back(num);
    }
    sort(v.begin(),v.end(),comp);
    for(int i = 0;i<size_num;i++){
        cout<<v[i];
    }

}