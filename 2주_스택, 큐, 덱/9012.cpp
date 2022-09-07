#include <iostream>
#include <string>
#include <stack>


using namespace std;

int main(){
    int T;
    cin >> T;
    string input;
    bool flag = true;
    for(int i = 0;i<T;i++){
        stack<char> s;
        cin >> input;
        for(int i = 0;i<input.length();i++){
            if (input[i] == '(') {
                s.push(input[i]);
            }
            else if(input[i] ==')'){
                if(s.empty()){
                    flag = false;
                    break;
                }
                else{
                    s.pop();
                }
            }
        }
        if(!s.empty() || flag == false){
            cout<<"NO"<<'\n';
        }
        else{
            cout<<"YES"<<'\n';
        }
        flag = true;
    }
    return 0;
}
