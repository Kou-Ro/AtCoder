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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    
    int countm = m, count = 0, countMax = 0;
    f0i(i, n){
        if(s[i] == '0'){
            countMax = max(countMax, count);
            count = 0;
            countm = m;
        }
        else if(s[i] == '1'){
             if(countm > 0){
                 countm--;
             }
             else{
                 count++;
             }
        }
        else{
            count++;
        }
    }
    countMax = max(countMax, count);
    cout << countMax << endl;
}

int yes(){
    cout << "Yes" << endl;
    return 0;
}

int no(){
    cout << "No" << endl;
    return 0;
}