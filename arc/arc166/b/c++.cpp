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
    unsigned long n,a,b,c,ab,bc,ac,abc;
    cin >> n >> a >> b >> c;
    vector<unsigned long> av(n);
    ab = lcm(a,b);
    bc = lcm(b,c);
    ac = lcm(a,c);
    abc = lcm(ab,c);
    
    for(unsigned long i = 0; i < n; i++){

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
