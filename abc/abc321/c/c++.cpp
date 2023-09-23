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

vi num(11, 10);

void inc(int dig);

int main(){
    num[0] = 1;
    
    l k;
    cin >> k;
    
    f0i(k - 1){
        inc(0);
    }
    
    for(int i = 10; i >= 0; i--){
        if(num[i] != 10){
            cout << num[i];
        }
    }
    cout << endl;
}

void inc(int dig){
    if(num[dig] + 1 == num[dig + 1]){
        num[dig] = dig;
        if(num[dig + 1] == 10){
            num[dig + 1] = dig + 1;
        }
        else{
            inc(dig + 1);
        }
    }
    else{
        num[dig]++;
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
