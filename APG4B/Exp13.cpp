#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    int ave = sum / n;
    
    for(int i = 0; i < n; i++){
        cout << ((ave - a[i] >= 0) ? ave - a[i] : a[i] - ave) << endl;
    }
}