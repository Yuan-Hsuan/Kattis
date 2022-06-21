#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int r, c;
    cin >> r >> c;

    vector< vector<int> > graph(r, vector<int>(c, 0));

    for( int i = 0 ; i < r; i++ ){
        for( int j = 0; j < c; j++ ){
            int depth;
            cin >> depth;
            graph[i][j] = depth;
        }
    }

    vector< vector<int> > ans(r, vector<int>(c+1, INT_MAX));

    for( int i = 0 ; i < r; i++ ){
        ans[i][0] = 0;
    }

    //column
    for( int i = 1 ; i < c+1; i++ ){
        //cell
        for( int j = 0; j < r; j++ ){
            int max_depth = ans[j][i-1];
            for( int k = j; k < r; k++ ){
                if( graph[k][i-1] > max_depth ){
                    max_depth = graph[k][i-1];
                }
                if( ans[k][i] > max_depth ){
                    ans[k][i] = max_depth;
                }
            }
            max_depth = ans[j][i-1];
            for( int k = j; k >= 0; k-- ){
                if( graph[k][i-1] > max_depth ){
                    max_depth = graph[k][i-1];
                }
                if( ans[k][i] > max_depth ){
                    ans[k][i] = max_depth;
                }
            }
        }
    }



    return 0;
}
