#include<iostream>  //入出力ライブラリ
#include<algorithm>  //アルゴリズムライブラリ

using namespace std;  // 標準ライブラリすべてに [std::] をつける面倒を省くため
static const int MAX = 200000;  // 静的な int型定数 MAX

int main(){
  int R[MAX], n;

  cin >> n;  // 入力値を n に代入
  for (int i = 0; i < n; i++) cin >> R[i]; // 与えられた n 個の数字を R[0] ~ R[n-1] に代入

  int maxv = -200000000;  // maxv としてあり得ない小さい数を代入
  int minv = R[0];  // minv として 一番はじめの数字を代入

  for (int i = 1; i < n; i++){ //過去の最小値と今までのRとの差で一番大きいものを得る //最小値を得る
    maxv = max(maxv,R[i] - minv);  // 「現時点での最小値 minv と今指している R[i] との差」と今まで比較して見つけてきた maxv の比較
    minv = min(minv, R[i]);  // 今までの最小値と今指してる R[i] のどちらが最小値かを比較
  }

  cout << maxv << endl;  // maxv を出力して改行(endl)を入れる

  return 0;  //owari

}
