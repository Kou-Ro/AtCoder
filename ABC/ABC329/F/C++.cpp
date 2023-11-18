#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    scanf("%d%d",&n,&q);
    vector<set<int>> c(n);
    for(int i = 0; i < n; i++){
        int cc;
        scanf("%d",&cc);
        c[i].insert(cc);
    }
    
    for(int i = 0; i < q; i++){
        int a, b;
        scanf("%d%d",&a,&b);
        c[b - 1].merge(c[a - 1]);
        c[a - 1].clear();
        printf("%lu\n",c[b - 1].size());
    }
}