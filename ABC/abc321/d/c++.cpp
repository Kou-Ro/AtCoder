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
    l n, m, p;
    cin >> n >> m >> p;
    vl a(n), b(m);
    
    f0i(n){
        cin >> a[i];
    }
    f0i(m){
        cin >> b[i];
    }
    
    l sum = 0;
    
    f0i(m){
        if(b[i] >= p){
            sum += p * n;
            b.erase(b.begin() + i);
            m--;
        }
    }
    
    f0i(n){
        if(a[i] >= p){
            sum += p * m;
        }
        else{
            f0j(m){
                sum += min(a[i] + b[j], p);
            }
        }
    }
    
    cout << sum << endl;
}

int yes(){
    cout << "Yes" << endl;
    return 0;
}

int no(){
    cout << "No" << endl;
    return 0;
}
