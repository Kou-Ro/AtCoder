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
#define gi(v) v.begin(), v.end()
int yes();
int no();

int main(){
    int k, g, m;
    cin >> k >> g >> m;
    
    int gg = 0, mm = 0;
    
    fi(i, 0, k){
        if(gg == g){
            gg = 0;
        }
        else if(mm == 0){
            mm = m;
        }
        else if(mm > g - gg){
            mm -= g - gg;
            gg = g;
        }
        else{
            gg += mm;
            mm = 0;
        }
    }
    
    cout << gg << " " << mm << endl;
}

int yes(){
    cout << "Yes" << endl;
    return 0;
}

int no(){
    cout << "No" << endl;
    return 0;
}
