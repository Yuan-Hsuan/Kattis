#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    vector<bool> connected(N+1, false);
    vector< vector<int> > cables( N+1, vector<int>() );

    connected[1] = true;
    for( int i = 0; i < M; i++ ){
        int a, b;
        cin >> a >> b;
        cables[a].push_back(b);
        cables[b].push_back(a);

    }

    list<int> queue;

    queue.push_back(1);

    while( !queue.empty() ){
        int house = queue.front();
        queue.pop_front();
        for( int i = 0; i < cables[house].size(); i++ ){
            if( !connected[cables[house][i]] ){
                connected[cables[house][i]] = true;
                queue.push_back(cables[house][i]);
            }
        }
    }


    int i = 1;
    bool success = true;
    for( vector<bool>::iterator n = connected.begin() + 1; n != connected.end(); n++ ){
        if( !(*n) ){
            cout << i << "\n";
            success = false;
        }
        i++;
    }
    if( success ){
        cout << "Connected";
    }

    return 0;
}
