#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;

    cin >> n >> m;

    vector< int > forced( n + 1, 0 );
    vector< vector<int> > unforced( n + 1, vector<int>() );

    vector< bool > unforced_list(n+1, false);

    vector< bool > unforced_visited(n+1, false);
    vector< bool > forced_visited(n+1, false);
    vector< bool > rest(n+1, false);

    for( int i = 0; i < m; i++ ){
        int a, b;
        cin >> a >> b;
        if( a > 0 ){
            unforced[a].push_back(b);
        }else{
            forced[-a] = b;
        }
    }

    int next = 1;
    while( !forced_visited[next] ){
        // cout << "next " << next << endl;
        forced_visited[next] = true;

        for( int i = 0; i < unforced[next].size(); i++ ){
            unforced_list[unforced[next][i]] = true;
        }
        
        if( forced[next] == 0 ){
            rest[next] = true;
            break;
        }

        next = forced[next];
    }


    for( int i = 1; i <= n; i++ ){
        if( unforced_list[i] ){
            // cout << "unforced_list " << i << endl;

            vector< bool > visited(n+1, false);
            int next = i;
            
            while( !visited[next] ){
                visited[next] = true;
                
                if( forced[next] == 0 ){
                    rest[next] = true;
                    break;
                }

                next = forced[next];
            }
        }
    }

    int ans = 0;
    for( int i = 1; i <= n; i++ ){
        if( rest[i] ){
            ans++;
        }
    }

    cout << ans;

    return 0;
}
