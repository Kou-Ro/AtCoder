#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<long>> d(n-1,vector<long>(n-1));
    for(int i = 0;i<n;i++){
        for(int j = 0;j< n-i-1;i++){
            cin >> d[i][j+i];
            cin >> d[j+i][i];
        }
    }
}
