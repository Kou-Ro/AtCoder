#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    vector<pair<int, int>> ab(n);
    
    for(int i = 0; i < n; i++){
        cin >> ab[i].second >> ab[i].first;
    }
    
    sort(ab.begin(),ab.end());
    
    for(int i = 0; i < n;i++){
        cout << ab[i].second << ' ' << ab[i].first << endl;
    }
}