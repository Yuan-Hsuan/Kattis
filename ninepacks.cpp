#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int size = 100 * 1000;
    vector<long long> hotdogs(size + 2, INT_MAX);
    vector<long long> buns(size + 2, INT_MAX);

    hotdogs[0] = 0;
    buns[0] = 0;
    
    int H,B;
    cin >> H;

    for(int i = 0; i < H; i++) {
        int h;
        cin >> h;
        for(int j = size + 1 - h; j >= 0; j--) {
            if( hotdogs[j+h] > hotdogs[j] ) {
                hotdogs[j+h] = hotdogs[j] + 1;
            }
        }
    }

    /*
    //print
    for(int j = size; j >= 0; j--) {
        cout << hotdogs[j] << endl;
    }
    */


    cin >> B;
    for(int i = 0; i < B; i++) {
        int b;
        cin >> b;
        for(int j = size + 1 - b; j >= 0; j--) {
            if( buns[j+b] > buns[j] ) {
                buns[j+b] = buns[j]+1;
            }
        }
    }

    long long ans = INT_MAX;
    for(int i = 1; i < size + 2; i++) {
        long long combine = hotdogs[i] + buns[i];
        if( ans > combine ){
            ans = hotdogs[i] + buns[i];
        }
    }

    if(ans == INT_MAX) {
        cout << "impossible\n";
        return 0;
    }
    cout << ans << "\n";
}
