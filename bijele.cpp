#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    list<int> num = {1,1,2,2,2,8};
    for( list<int>::iterator it = num.begin(); it != num.end(); it++ ){
        int piece;
        cin >> piece;
        cout << *it - piece << " ";
    }
    
    return 0;
}
