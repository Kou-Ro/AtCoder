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
#define fi(s, e) for(int i = (s); i < (e); i++)
#define f0i(e) fi(0,(e))
#define fj(s, e) for(int j = (s); j < (e); j++)
#define f0j(e) fj(0,(e))
#define fk(s, e) for(int k = (s); k < (e); k++)
#define f0k(e) fk(0,(e))
int yes();
int no();

int main(){
    int n, x;
    cin >> n >> x;
    vi a(n-1);
    f0i(n - 1){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int sum = 0;
    fi(1, n - 2){
        sum += a[i];
    }
    
    int b = x-sum;
    
    if(b <= a[0]){
        cout << 0 << endl;
        return 0;
    }
    else if(b > a[n-2]){
        cout << -1 << endl;
        return 0;
    }
    else{
        cout << b << endl;
        return 0;
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
