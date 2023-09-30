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
    string s;
    cin >> n >> s;
    
    f0i(n-2){
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C'){
            cout << i+1 << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
    return 0;
}

int yes(){
    cout << "Yes" << endl;
    return 0;
}

int no(){
    cout << "No" << endl;
    return 0;
}
