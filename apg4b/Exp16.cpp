#include <bits/stdc++.h>
using namespace std;
#define SIZE 5
int main() {
  vector<int> data(SIZE);
  for (int i = 0; i < SIZE; i++) {
    cin >> data.at(i);
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  for(int i = 0; i < SIZE-1; i++){
      if(data[i] == data[i + 1]){
          cout << "YES" << endl;
          return 0;
      }
  }
  cout << "NO" << endl;
}
