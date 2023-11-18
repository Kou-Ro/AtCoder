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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> alc(26, 0);
    
    int cnum = -1;
    int maxc = 0;
    for(int i = 0; i < n; i++){
        if(s[i] - 'a' == cnum){
            maxc++;
        }
        else{
            alc[cnum] = max(alc[cnum], maxc);
            maxc = 1;
            cnum = s[i] - 'a';
        }
    }
    alc[cnum] = max(alc[cnum], maxc);
    
    int sum = 0;
    for(int i = 0; i < 26; i++){
        sum+= alc[i];
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
