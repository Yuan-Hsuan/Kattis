#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    
    for( int i = 0; i < T; i++ ){

        int N;
        cin >> N;

        priority_queue<long long, vector<long long>, greater<long long>> canvas;

        for( int j = 0; j < N; j++ ){
            long long canva;
            cin >> canva;
            canvas.push(canva);
        }

        long long ans = 0;
        for( int now = 0; now < N-1; now++ ){
            long long pre = canvas.top();
            // cout << "pre " << pre << endl;
            canvas.pop();
            pre += canvas.top();
            // cout << "pre " << pre << endl;
            canvas.pop();
            ans += pre;
            canvas.push(pre);
        }
        cout << ans << "\n";
    }

    return 0;
}
