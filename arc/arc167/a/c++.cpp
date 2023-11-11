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
    int n, m;
    cin >> n >> m;
    int single = 2*m-n;
    vi a(n);
    vector<pair<int,int>> pa(n);
    f0i(n){
        cin >> a[i];
        pa[i].first = a[i];
        pa[i].second = i;
    }
    
    sort(pa.begin(),pa.end());
    
    vi singles(single);
    f0i(single){
        singles[i]=pa[i].second;
    }
    
    sort(singles.begin(),singles.end());
    
    int sum = 0, state = 0;
    for(int i = 0; i < n; i++){
        
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
