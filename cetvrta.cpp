#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if( x1 == x2 ) cout << x3;
    else if( x2 == x3 ) cout << x1;
    else cout << x2;
    
    cout << " ";
    
    if( y1 == y2 ) cout << y3;
    else if( y2 == y3 ) cout << y1;
    else cout << y2;
    
    return 0;
}
