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

int h, w, counts = 0;
vector<string> s;
void dcount(int i, int j, int bi, int bj);

int main(){
    cin >> h >> w;
    string adds;
    f0i(w + 2){
        adds.push_back('.');
    }
    s.push_back(adds);
    f0i(h){
        string cs;
        cs.push_back('.');
        string ccs;
        cin >> ccs;
        cs += ccs;
        cs.push_back('.');
        s.push_back(cs);
        //counts += (int)count(cs.begin(), cs.end(), '#');
    }
    s.push_back(adds);
    
    f0i(h){
        f0j(w){
            if(s[i][j] == '#'){
                dcount(i, j, i, j);
                counts++;
            }
        }
    }
    
    cout << counts << endl;
}

void dcount(int i, int j, int bi, int bj){
    s[i][j] = '.';
    vector<pair<int, int>> clist = {{i - 1, j - 1},
                                    {i - 1, j},
                                    {i - 1, j + 1},
                                    {i,     j - 1},
                                    {i,     j + 1},
                                    {i + 1, j - 1},
                                    {i + 1, j},
                                    {i + 1, j + 1}};
    f0k(8){
        if(s[clist[k].first][clist[k].second] == '#' && (clist[k].first != bi || clist[k].second != bj)){
            dcount(clist[k].first, clist[k].second, i, j);
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
