#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef long l;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<str> vs;
typedef vector<l> vl;
typedef vector<ll> vll;
#define fi(v, s, e) for(int (v) = (s); (v) < (e); (v)++)
#define f0i(v, e) fi((v), 0, (e))
#define fd(v, s, e) for(int (v) = (s) - 1; (v) >= (e); (v)--)
#define f0d(v, s) fd(v, (s), 0)
int yes();
int no();

int main(){
    vector<vector<int>> a(9, vector<int>(9));
    
    f0i(i, 9){
        vector<bool> ba(9, false);
        f0i(j, 9){
            cin >> a[i][j];
            if(ba[a[i][j] - 1]){
                return no();
            }
            ba[a[i][j] - 1] = true;
        }
    }
    
    f0i(i, 9){
        vector<bool> ba(9, false);
        f0i(j, 9){
            if(ba[a[j][i] - 1]){
                return no();
            }
            ba[a[j][i] - 1] = true;
        }
    }
    
    for(int i = 0; i < 9; i += 3){
        for(int j = 0; j < 9; j += 3){
            vector<bool> ba(9, false);
            for(int k = 0; k < 3; k++){
                for(int l = 0; l < 3; l++){
                    if(ba[a[i+k][j+l] - 1]){
                        return no();
                    }
                    ba[a[i+k][j+l] - 1] = true;
                }
            }
        }
    }
    
    return yes();
}

int yes(){
    cout << "Yes" << endl;
    return 0;
}

int no(){
    cout << "No" << endl;
    return 0;
}
