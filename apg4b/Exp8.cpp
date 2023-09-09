#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    cin >> p;
    int price = 0;
    string text = "";
    
    // パターン1
    if (p == 1) {
        cin >> price;
    }
    
    // パターン2
    if (p == 2) {
        cin >> text >> price;
        text += "!\n";
    }
    
    int N;
    cin >> N;
    
    cout << text << price * N << endl;
}