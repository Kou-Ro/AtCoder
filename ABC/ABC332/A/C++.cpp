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
    int n, s, k;
    cin >> n >> s >> k;
    int sum = 0;
    f0i(i, n){
        int p, q;
        cin >> p >> q;
        sum += p * q;
    }
    if(sum < s){
        sum += k;
    }
    cout << sum;
}

int yes(){
    cout << "Yes" << endl;
    return 0;
}

int no(){
    cout << "No" << endl;
    return 0;
}
