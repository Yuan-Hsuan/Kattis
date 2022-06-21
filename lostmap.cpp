#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector< vector<int> > dis;
    vector<int> set_mst(n, -1);
    vector<bool> is_mst(n, false);
    vector<int> set_key(n, INT_MAX);
    
    for( int i = 0; i < n; i++ ){
        
        dis.push_back( vector<int>() );
        for( int j = 0; j < n; j++ ){
            int d;
            cin >> d;
            dis[i].push_back( d );
        }
    }

    set_mst[0] = 0;
    set_key[0] = 0;

    for( int i = 1; i < n; i++ ){
        int min = INT_MAX;
        int min_i;
        for( int j = 0; j < n; j++ ){
            if( !is_mst[j] && set_key[j] < min ){
                min = set_key[j];
                min_i = j;
            }
        }

        // cout << min_i << endl;
        is_mst[min_i] = true;
        for( int j = 0; j < n; j++ ){
            if( !is_mst[j] && set_key[j] > dis[min_i][j] ){
                set_key[j] = dis[min_i][j];
                set_mst[j] = min_i;
            }
        }

        // for( int j = 0; j < n; j++ ){
        //     cout << set_key[j];
        // }
        // cout << endl;
        // for( int j = 0; j < n; j++ ){
        //     cout << set_mst[j];
        // }
        // cout << endl;
    }

    for( int i = 1; i < n; i++ ){
        cout << i + 1  << " " << set_mst[i] + 1 << "\n";
    }

    return 0;
}
