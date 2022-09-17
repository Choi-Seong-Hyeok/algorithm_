#include<iostream>
#include<deque>
using namespace std;
int main(){
    int N,K,M;
    cin >> N >> K >> M;
    deque<int> de;
    int cnt = 0;
    bool check = false;
    for(int i = 1;i<=N;i++){
        de.push_back(i);
    }
while(!de.empty()) {
        if (check == 0) {
            for (int i = 0; i < K - 1; i++) {
                de.push_back(de.front());
                de.pop_front();
            }
            cout << de.front() << '\n';
            de.pop_front();
        } else {
            for (int i = 0; i < K - 1; i++) {
                de.push_front(de.back());
                de.pop_back();
            }
            cout << de.back() << '\n';
            de.pop_back();
        }
        cnt++;
        if(cnt == M){
            check = !check;
            cnt = 0;
        }

}

    return 0;
}