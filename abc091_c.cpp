#include<bits/stdc++.h>
using namespace std;
// 参考:https://drken1215.hatenablog.com/entry/2021/07/05/183800#fn:1

// 二次元座標を定義
using Point = pair<int,int>;

int main(){
    int N;
    cin >> N;
    vector<Point> red(N), blue(N);
    for (int i=0;i<N;i++) cin >> red[i].first >> red[i].second;
    for (int i=0;i<N;i++) cin >> blue[i].first >> blue[i].second;

    // 青い点をx座標が小さい順にソート
    sort(blue.begin(),blue.end());

    // 各赤い点が使用済みかどうか
    vector<bool> used(N, false);

    // 青い点を順番に見ていく
    int res = 0;
    for (int i=0;i<N;++i) {
        // 使用済みでなく，かつy座標最大の赤い点を探す
        int maxy = -1, maxid = -1;
        for (int j=0;j<N;++j) {
            // 使用済みの赤い点は不可
            if (used[j]) continue;


            // x座標，y座標がより大きい赤い点は不可
            if (red[j].first >= blue[i].first) continue;
            if (red[j].second >= blue[i].second) continue;

            // 最大値を更新
            if (maxy < red[j].second) {
                maxy = red[j].second;
                maxid = j;
            }
        }

        // 存在しない場合はスキップ
        if (maxid == -1) continue;

        // ペアリングする
        ++res;
        used[maxid] = true;
    }
    cout << res << endl;
    return 0;
}