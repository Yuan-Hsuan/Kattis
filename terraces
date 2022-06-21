#include<bits/stdc++.h>
using namespace std;

int x, y;
vector< vector<int> > land;
vector< vector<bool> > visited;

void right( int height, list< pair<int, int> > &queue, bool &can_rice, int &num, int i, int j ){
    if( !visited[i][j+1] ){
        if( height == land[i][j+1] ){
            visited[i][j+1] = true;
            queue.push_back( make_pair(i,j+1) );
            // cout << "right " << i << " " << j+1 << endl;
            num++;
        }
    }
    if( height > land[i][j+1] ){
        // visited[i][j+1] = true;
        can_rice = false;
    }
}

void bottom( int height, list< pair<int, int> > &queue, bool &can_rice, int &num, int i, int j ){
    if( !visited[i+1][j] ){
        if( height == land[i+1][j] ){
            visited[i+1][j] = true;
            queue.push_back( make_pair(i+1,j) );
            // cout << "bottom " << i+1 << " " << j << endl;
            num++;
        }
    }
    if( height > land[i+1][j] ){
        // visited[i+1][j] = true;
        can_rice = false;
    }
}

void left( int height, list< pair<int, int> > &queue, bool &can_rice, int &num, int i, int j ){
    if( !visited[i][j-1] ){
        if( height == land[i][j-1] ){
            visited[i][j-1] = true;
            queue.push_back( make_pair(i,j-1) );
            // cout << "left " << i << " " << j-1 << endl;
            num++;
        }
    }
    if( height > land[i][j-1] ){
        // visited[i][j-1] = true;
        can_rice = false;
    }
}

void top( int height, list< pair<int, int> > &queue, bool &can_rice, int &num, int i, int j ){
    if( !visited[i-1][j] ){
        if( height == land[i-1][j] ){
            visited[i-1][j] = true;
            queue.push_back( make_pair(i-1,j) );
            // cout << "top " << i-1 << " " << j << endl;
            num++;
        }
    }
    if( height > land[i-1][j] ){
        // visited[i-1][j] = true;
        can_rice = false;
    }
}

void BFS( list< pair<int, int> > &queue, bool &can_rice, int &num, int i, int j ){
    
    int height = land[i][j];
    if( i == 0 ){
        //bottom
        bottom(height, queue, can_rice, num, i, j);

        //right
        if( j == 0 ){
            right(height, queue, can_rice, num, i, j);
        }
        //left
        else if( j == x - 1 ){
            left(height, queue, can_rice, num, i, j);
        }
        else{
            right(height, queue, can_rice, num, i, j);
            left(height, queue, can_rice, num, i, j);
        }
    }
    else if( i == y - 1 ){
        //top
        top(height, queue, can_rice, num, i, j);

        //right
        if( j == 0 ){
            right(height, queue, can_rice, num, i, j);
        }
        //left
        else if( j == x - 1 ){
            left(height, queue, can_rice, num, i, j);
        }
        else{
            right(height, queue, can_rice, num, i, j);
            left(height, queue, can_rice, num, i, j);
        }

    }
    else if( j == 0 ){
        right(height, queue, can_rice, num, i, j);
        bottom(height, queue, can_rice, num, i, j);
        top(height, queue, can_rice, num, i, j);
    }
    else if( j == x - 1 ){
        bottom(height, queue, can_rice, num, i, j);
        left(height, queue, can_rice, num, i, j);
        top(height, queue, can_rice, num, i, j);
    }
    else{
        right(height, queue, can_rice, num, i, j);
        bottom(height, queue, can_rice, num, i, j);
        left(height, queue, can_rice, num, i, j);
        top(height, queue, can_rice, num, i, j);
    }
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> x >> y;

    land.resize(y, vector<int>() );

    for( int i = 0; i < y; i++ ){
        for( int j = 0; j < x; j++ ){
            int height;
            cin>> height;
            land[i].push_back(height);
        }
    }

    visited.resize( y, vector<bool>(x, false) );

    int ans = 0;
    for( int i = 0; i < y; i++ ){
        for( int j = 0; j < x; j++ ){
            if( !visited[i][j] ){
                visited[i][j] = true;
                list< pair<int, int> > queue;
                bool can_rice = true;
                int num = 1;
                queue.push_back( make_pair(i,j) );
                while( !queue.empty() ){
                    pair<int, int> top = queue.front();
                    queue.pop_front();
                    BFS(queue, can_rice, num, top.first, top.second);
                }

                if( can_rice ){
                    // cout << i << " " << j << " " << num << endl;
                    ans += num;
                }
            }
        }
    }
    cout << ans;

    return 0;
}
