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

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> a(m);
    f0i(m) {
        int cp;
        cin >> cp;
        a[i].first = cp;
        a[i].second = i;
    }

    int maxp = 0;
    vs s(n);
    vi ps(n);
    f0i(n) {
        cin >> s[i];
        f0j(m) {
            if (s[i][j] == 'o') {
                ps[i] += a[j].first;
            }
        }
        ps[i] += i + 1;
        maxp = max(maxp, ps[i]);
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    f0i(n) {
        int ansc = 0;
        if(ps[i] == maxp){
            cout << 0 << endl;
        }
        else{
            f0j(m){
                if(ps[i] > maxp){
                    cout << ansc << endl;
                    break;
                }
                if(s[i][a[j].second] == 'x'){
                    ps[i] += a[j].first;
                    ansc++;
                }
            }
        }
    }

}

int yes() {
    cout << "Yes" << endl;
    return 0;
}

int no() {
    cout << "No" << endl;
    return 0;
}
