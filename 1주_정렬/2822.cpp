#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> v;

    int sum = 0;
    int ar = 0;
    for(int i = 0;i<8;i++){
        int num;
        cin >> num;
        v.push_back(num);
    }

    vector<int> index = v;
    vector<int> result(5);

    int *arr = new int[5];
    sort(v.begin(),v.end());

    sum = v[3] + v[4] + v[5] + v[6] + v[7];


    cout<<sum<<'\n';

    for(int i = 3;i<8;i++){
        for(int j = 0;j<8;j++){
            if(v[i] == index[j]){
                result[ar] = j;
                ar++;
            }
        }
    }
    sort(result.begin(),result.end());

    for(int i =0;i<5;i++){
        cout<<result[i] + 1<<" ";
    }

}