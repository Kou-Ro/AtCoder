#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, p;
    cin >> n >> m >> p;
    if(n < m){
        cout << 0 <<endl;
        return 0;
    }
    int ans = ((n - m) / p)+1;
    cout << ans << endl;
}
