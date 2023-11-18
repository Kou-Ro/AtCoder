// Not correct
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
    vvi c(3, vi(3, 0));
    int hit = 0;
    f0i(3){
        f0j(3){
            cin >> c[i][j];
        }
        vi cpc(3);
        copy(c[i].begin(), c[i].end(), cpc.begin());
        sort(cpc.begin(), cpc.end());
        if((cpc[0] == cpc[1]) || (cpc[1] == cpc[2])){
            hit++;
        }
    }
    f0i(3){
        vi cpc{c[0][i], c[1][i], c[2][i]};
        sort(cpc.begin(), cpc.end());
        if((cpc[0] == cpc[1]) || (cpc[1] == cpc[2])){
            hit++;
        }
    }
    {
        vi cpc{c[0][0], c[1][1], c[2][2]};
        sort(cpc.begin(), cpc.end());
        if((cpc[0] == cpc[1]) || (cpc[1] == cpc[2])){
            hit++;
        }
    }
    {
        vi cpc{c[0][2], c[1][1], c[2][0]};
        sort(cpc.begin(), cpc.end());
        if((cpc[0] == cpc[1]) || (cpc[1] == cpc[2])){
            hit++;
        }
    }
    cout << hit << endl;
    double ans = pow(2, hit) / pow(3, hit);
    cout << ans;
    
}

int yes(){
    cout << "Yes" << endl;
    return 0;
}

int no(){
    cout << "No" << endl;
    return 0;
}
