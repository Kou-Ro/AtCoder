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
#define fd(v, s, e) for(int (v) = (s) - 1; (v) <= (e); (v)--)
#define f0d(v, s) fd(v, (s), 0)
int yes();
int no();

int main(){
    ll b;
    cin >> b;
    
    for(int i = 0; true; i++){
        ll p = (ll)pow(i, i);
        if(p > b){
            cout << "-1";
            return 0;
        }
        if(p == b){
            cout << i;
            return 0;
        }
    }
}

int yes(){
    cout << "Yes" << endl;
    return 0;
}

int no(){
    cout << "No" << endl;
    return 0;
}
