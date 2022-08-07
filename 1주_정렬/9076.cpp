#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;


int main()
{
    int T;
    cin >> T;

    vector<vector<int>> v(T);


    for(int i = 0;i<T;i++){
        for(int j = 0;j<5;j++){
            int num;
            cin >> num;
            v[i].push_back(num);
        }
    }

    for(int i = 0;i<T;i++){
        sort(v[i].begin(),v[i].end());
    }

    for(int i = 0;i<T;i++){
        int check_;
        int sum = 0;
        for(int j = 1;j<4;j++){
            sum += v[i][j];
        }
        check_ = v[i][3] - v[i][1];
        if(check_ < 4){
            cout<<sum<<'\n';
        }
        else{
            cout<<"KIN"<<'\n';
        }
    }

}