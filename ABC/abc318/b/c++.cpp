#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<bool>> seat(100, vector<bool>(100, false));
    int n;
    cin >> n;
    //vector<vector<int>> ad(n, vector<int>(4, 0));
    for(int i = 0; i < n; i++){
        //cin >> ad[i][0] >> ad[i][1] >> ad[i][2] >> ad[i][3];
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for(int j = a; j < b; j++){
            for(int k = c; k < d; k++){
                seat[j][k] = true;
            }
        }
    }
    
    int ans=0;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(seat[i][j])ans++;
        }
    }
    
    cout << ans;
    
}
