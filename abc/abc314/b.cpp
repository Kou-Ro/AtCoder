#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    vector<int> c(n);
    vector<vector<int>> aa;
    for(int i = 0; i < n; i++){
        cin >> c[i];
        
        vector<int> a(c[i]);
        for(int j = 0; j < c[i]; j++){
            //cout << "hoge" <<endl;
            cin >> a[j];
        }
        aa.push_back(a);
    }
    int x = 0;
    cin >> x;
    
    int maxC = 0;
    for(int i =0; i < n; i++){
        if(c[i] > maxC)maxC=c[i];
    }
    
    vector<int> ans;
    int minNum = maxC;
    for(int i = 0; i < n; i++){
        //cout << minNum;
        int flag = false;
        for(int j = 0; j < aa[i].size(); j++){
            flag = flag || aa[i][j] == x;
        }
        if(flag){
            if(aa[i].size() < minNum){
                ans.clear();
                minNum = aa[i].size();
            }
            
            if(aa[i].size() == minNum){
                ans.push_back(i+1);
            }
        }
    }
    
    cout << ans.size() << endl;
    for(int &p:ans){
        cout << p << " ";
    }
    cout << endl;
    
}
