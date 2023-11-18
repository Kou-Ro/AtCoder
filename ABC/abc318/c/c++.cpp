#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    long p;
    cin >> n >> d >> p;
    vector<long long> f(n, 0);
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    sort(f.begin(), f.end(),std::greater<long long>());
    int spc = 0;
    for(int i = 0; i < n / d; i++){
        long long sum = 0;
        for(int j = 0; j < d; j++){
            sum += f[i * d + j];
        }
        if(sum > p){
            spc++;
        }
    }
    
    long long ends = 0;
    for(int i = (n / d) * d; i < n; i++){
        ends += f[i];
    }
    
    if(ends > p){
        spc++;
    }
    
    long long ans = spc * p;
    for(int i = n - 1; i > spc * d - 1;i--){
        ans += f[i];
    }
    
    cout << ans;
}
