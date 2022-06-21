#include<bits/stdc++.h>
using namespace std;

int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int n, m;

    while( cin >> n >> m ){

        vector< int > set_list;
        vector< vector<int> > set;

        //initial
        for( int i = 0; i <= n; i++ ){
            set_list.push_back(i);
        }

        for( int i = 0; i <= n; i++ ){
            set.push_back( vector<int>() );
            set[i].push_back(i);
        }
        
        for( int i = 0; i < m; i++ ){
            int operation, p, q;

            cin >> operation;

            if( operation == 1 ){
                cin >> p >> q;
                if( set_list[p] != set_list[q] ){
                    // from p to q
                    if( set[set_list[p]].size() < set[set_list[q]].size() ){
                        int set_index = set_list[p];
                        for( int j = 0; j < set[set_index].size(); j++ ){
                            set[set_list[q]].push_back(set[set_index][j]);
                            set_list[set[set_index][j]] = set_list[q];
                        }
                        set[set_index].clear();
                    }
                    // from q to p
                    else{
                        int set_index = set_list[q];
                        for( int j = 0; j < set[set_index].size(); j++ ){
                            set[set_list[p]].push_back(set[set_index][j]);
                            set_list[set[set_index][j]] = set_list[p];
                        }
                        set[set_index].clear();
                    }
                    
                }

            }else if( operation == 2 ){
                cin >> p >> q;
                if( set_list[p] != set_list[q] ){
                    for( int j = 0; j < set[set_list[p]].size(); j++ ){
                        if( set[set_list[p]][j] == p ){
                            set[set_list[p]].erase( set[set_list[p]].begin() + j );
                            break;
                        }
                    }
                    set[set_list[q]].push_back(p);
                    set_list[p] = set_list[q];
                }
            }
            else{
                cin >> p;
                long long ans = 0;
                for( int j = 0; j < set[set_list[p]].size(); j++ ){
                    ans += set[set_list[p]][j];
                }
                cout << set[set_list[p]].size() << " " << ans << "\n";
            }
        }
        // cout << "here" << endl;
    }

    return 0;
}
