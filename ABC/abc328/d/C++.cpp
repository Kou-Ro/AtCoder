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
int yes();
int no();

int main(){
    string s;
    cin >> s;
    string ans = "";
    vector<int> checks(s.size());
    
    int connect = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A'){
            checks[i] = 1;
        }
        else if(s[i] == 'B'){
            if(i < 1){
                checks[i] = 0;
                connect = 0;
            }
            else if(checks[i - 1] == 1){
                checks[i] = 2;
            }
            else if(checks[i - 1] == 3){
                if(i - connect * 3 -1 < 0){
                    checks[i] = 0;
                    connect = 0;
                }
                else if(checks[i - connect * 3 -1] == 1){
                    checks[i] = 2;
                }
                else{
                    checks[i] = 0;
                    connect = 0;
                }
            }
        }
        else if(s[i] == 'C'){
            if(i < 2){
                checks[i] = 0;
                connect = 0;
            }
            else if(checks[i - 1] == 2){
                checks[i] = 3;
                connect++;
            }
            else if(checks[i - 1] == 3){
                if(i - connect * 3 -1 < 0){
                    checks[i] = 0;
                    connect = 0;
                }
                else if(checks[i - connect * 3 -1] == 2){
                    checks[i] = 3;
                }
                else{
                    checks[i] = 0;
                    connect = 0;
                }
            }
        }
    }
    
    cout << ans << endl;
}

int yes(){
    cout << "Yes" << endl;
    return 0;
}

int no(){
    cout << "No" << endl;
    return 0;
}
