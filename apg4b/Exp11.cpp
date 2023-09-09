#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0, a = 0;
    cin >> n >> a;
    
    for(int i = 0; i < n; i++){
        char op = 0;
        int b = 0;
        cin >> op >> b;
        
        if(op == '+'){
            a += b;
        }
        else if(op == '-'){
            a -= b;
        }
        else if(op == '*'){
            a *= b;
        }
        else if(op == '/'){
            if(b == 0){
                cout << "error" << endl;
                break;
            }
            a /= b;
        }
        
        cout << i + 1 << ":" << a << endl;
    }
}