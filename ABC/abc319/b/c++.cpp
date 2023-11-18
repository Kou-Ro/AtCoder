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
    vi l1;
    for(int i = 1; i <= 9; i++){
        if(n % i == 0){
            l1.push_back(i);
        }
    }
    vi l2;
    for(int i = 0; i < l1.size(); i++){
        l2.push_back(n / l1[i]);
    }
    
    f0i(n + 1){
        bool out = false;
        f0j(l2.size()){
            if(i % l2[j] == 0){
                cout << l1[j];
                out = true;
                break;
            }
        }
        if(!out){
            cout << '-';
        }
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
