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
    vector<pair<int,int>> spn(n);
    f0i(n){
        int o=0;
        string cs;
        cin >> cs;
        f0j(n){
            if(cs[j]=='o')o++;
        }
        spn[i].first=o;
        spn[i].second=n-i;
    }

    sort(spn.begin(),spn.end());
    reverse(spn.begin(),spn.end());
    f0i(n){
        cout << n-spn[i].second+1<<" ";
    }
    cout << endl;

}

int yes(){
    cout << "Yes" << endl;
    return 0;
}

int no(){
    cout << "No" << endl;
    return 0;
}
