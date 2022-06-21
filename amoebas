#include<bits/stdc++.h>
using namespace std;

int m, n;

bool direct(vector< vector<bool> > &graph, int &x, int &y){
    bool success = true;
    if( x == 0 && y == 0 ){
        //right
        if( graph[x+1][y] ){
            x++;
        }
        //lower right
        else if( graph[x+1][y+1] ){
            x++;
            y++;
        }
        //bottom
        else if( graph[x][y+1] ){
            y++;
        }
        else{
            success = false;
        }
    }else if( x == n-1 && y == 0 ){
        //bottom
        if( graph[x][y+1] ){
            y++;
        }
        //lower left
        else if( graph[x-1][y+1] ){
            x--;
            y++;
        }
        //left
        else if( graph[x-1][y] ){
            x--;
        }
        else{
            success = false;
        }
    }else if( y == 0 ){
        //right
        if( graph[x+1][y] ){
            x++;
        }
        //lower right
        else if( graph[x+1][y+1] ){
            x++;
            y++;
        }
        //bottom
        else if( graph[x][y+1] ){
            y++;
        }
        //lower left
        else if( graph[x-1][y+1] ){
            x--;
            y++;
        }
        //left
        else if( graph[x-1][y] ){
            x--;
        }
        else{
            success = false;
        }
    }else if( x == n-1 && y == m-1 ){
        //left
        if( graph[x-1][y] ){
            x--;
        }
        //upper left
        else if( graph[x-1][y-1] ){
            x--;
            y--;
        }
        //top
        else if( graph[x][y-1] ){
            y--;
        }
        else{
            success = false;
        }
    }
    else if( x == n-1 ){
        //bottom
        if( graph[x][y+1] ){
            y++;
        }
        //lower left
        else if( graph[x-1][y+1] ){
            x--;
            y++;
        }
        //left
        else if( graph[x-1][y] ){
            x--;
        }
        //upper left
        else if( graph[x-1][y-1] ){
            x--;
            y--;
        }
        //top
        else if( graph[x][y-1] ){
            y--;
        }
        else{
            success = false;
        }
    }
    else if( x == 0 && y == m-1 ){
        //right
        if( graph[x+1][y] ){
            x++;
            
        }
        //top
        else if( graph[x][y-1] ){
            y--;
        }
        //upper right
        else if( graph[x+1][y-1]){
            x++;
            y--;
        }
        else{
            success = false;
        }
    }
    else if( y == m-1 ){
        // cout << "here" << endl;
        //right
        if( graph[x+1][y] ){
            x++;
        }
        //left
        else if( graph[x-1][y] ){
            x--;
        }
        //upper left
        else if( graph[x-1][y-1] ){
            x--;
            y--;
        }
        //top
        else if( graph[x][y-1] ){
            y--;
        }
        //upper right
        else if( graph[x+1][y-1]){
            x++;
            y--;
        }
        else{
            success = false;
        }
    }
    else if( x == 0 ){
        // cout << "here" << endl;
        //right
        if( graph[x+1][y] ){
            x++;
        }
        //lower right
        else if( graph[x+1][y+1] ){
            x++;
            y++;
        }
        //bottom
        else if( graph[x][y+1] ){
            y++;
        }
        //top
        else if( graph[x][y-1] ){
            y--;
        }
        //upper right
        else if( graph[x+1][y-1]){
            x++;
            y--;
        }
        else{
            success = false;
        }
    }
    else{
        //right
        if( graph[x+1][y] ){
            x++;
            
        }
        //lower right
        else if( graph[x+1][y+1] ){
            x++;
            y++;
        }
        //bottom
        else if( graph[x][y+1] ){
            y++;
        }
        //lower left
        else if( graph[x-1][y+1] ){
            x--;
            y++;
        }
        //left
        else if( graph[x-1][y] ){
            x--;
        }
        //upper left
        else if( graph[x-1][y-1] ){
            x--;
            y--;
        }
        //top
        else if( graph[x][y-1] ){
            y--;
        }
        //upper right
        else if( graph[x+1][y-1]){
            x++;
            y--;
        }
        else{
            success = false;
        }
    }
    return success;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
    cin >> m >> n;

    vector< vector<bool> > graph(n, vector<bool>(m) );

    for( int i = 0; i < m; i++ ){
        for( int j = 0; j < n; j++ ){
            char c;
            cin >> c;
            if( c == '.' )
                graph[j][i] = false;
            else    
                graph[j][i] = true;
        }
    }
    // cout << "After input" << endl;

    int ans = 0;
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < m; j++ ){
            if( graph[i][j] ){
                int x = i;
                int y = j;
                // cout << "new cycle " << x << " " << y << endl;

                graph[i][j] = false;

                direct(graph, x, y);
                // cout << x << " " << y << endl;

                graph[x][y] = false;

                if( direct(graph, x, y) ){
                    // cout << x << " " << y << endl;
                    graph[i][j] = true;
                    while( !(x == i && y == j) ){
                        // cout << "in while loop" << endl;
                        graph[x][y] = false;
                        // cout << x << " " << y << endl;
                        direct(graph, x, y);
                        // if ( ! ){
                        //     cout << "break " << x << " " << y << endl;
                        //     break;
                        // }
                        // cout << x << " " << y << endl;
                    }
                    graph[i][j] = false;
                }
                ans++;
            }
        }
    }
    cout << ans;

    return 0;
}
