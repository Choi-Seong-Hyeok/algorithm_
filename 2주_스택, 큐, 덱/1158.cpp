#include <iostream>
#include <vector>
#include<queue>
using namespace std;


int main() {
    int N,K;
    cin>>N>>K;
    int cnt = 0;
    cnt = N;
    queue<int> q;
    vector<int> v;

    for(int i = 1;i<=N;i++) q.push(i);


    while(N>0){
        for(int i = 0;i<K-1;i++){
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front());
        q.pop();
        N--;
    }
    cout<<'<';
    for(int i=0;i<cnt;i++){
        if(i == cnt-1){
            cout<<v[i];
            break;
        }
        cout<<v[i]<<", ";
    }
    cout<<'>';
}