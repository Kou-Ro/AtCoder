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
    int n,q;
    cin >> n >> q;
    string ss;
    cin >> ss;
    vector<int> s(n);
    s[0] = 0;
    char bc = ss[0];
    fi(i,1,n){
        if(ss[i] == bc){
            s[i] = s[i - 1] + 1;
        }
        else{
            s[i] = s[i - 1];
        }
        bc = ss[i];
    }
    
    f0i(i, q){
        int l, r;
        cin >> l >> r;
        cout << s[r - 1] - s[l - 1] << endl;
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
