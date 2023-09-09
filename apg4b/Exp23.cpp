#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    set<int> a;
    map<int,int> ac;
    
    for(int i = 0; i < n; i++){
        int ra = 0;
        cin >> ra;
        a.insert(ra);
        if(ac.count(ra)){
            ac[ra]++;
        }
        else{
            ac[ra] = 1;
        }
    }
    
    int maxind = 0;
    int maxnum = 0;
    //cout << ac.size() << " " << a.size() << endl << endl; //ac.size() = a.size()
    auto indit = a.begin();
    for(int i = 0; i < a.size(); i++){
        if(ac[*indit] > maxnum){
            maxind = *indit;
            maxnum = ac[*indit];
        }
        indit++;
    }
    //for(int i = 0;i<a.size();i++){
    //    cout << i << endl;
    //}
    
    cout  << maxind << ' ' << maxnum << endl;
}