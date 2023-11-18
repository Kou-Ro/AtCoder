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
    int n;
    cin >> n;
    vi sx(24);
    
    f0i(n){
        int w,x;
        cin >> w >> x;
        sx[x] += w;
    }
    
    int maxp = 0;
    f0i(24){
        int csum = 0;
        f0j(9){
            csum += sx[(i + j) % 24];
        }
        maxp = max(maxp, csum);
    }
    
    cout << maxp;
    
}

int yes(){
    cout << "Yes" << endl;
    return 0;
}

int no(){
    cout << "No" << endl;
    return 0;
}
