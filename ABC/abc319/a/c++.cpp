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
    map<string, int> list{
            {"tourist",    3858},
            {"ksun48",     3679},
            {"Benq",       3658},
            {"Um_nik",     3648},
            {"apiad",      3638},
            {"Stonefeang", 3630},
            {"ecnerwala",  3613},
            {"mnbvmar",    3555},
            {"newbiedmy",  3516},
            {"semiexp",    3481}
    };
    string s;
    cin >> s;
    cout << list[s] << endl;
}

int yes(){
    cout << "Yes" << endl;
    return 0;
}

int no(){
    cout << "No" << endl;
    return 0;
}
