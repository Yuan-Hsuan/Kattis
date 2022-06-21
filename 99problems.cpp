#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int number;
    cin >> number;
    
    int temp = number/100*100;
    int big = temp + 99;
    int small = temp - 1;
    
    if( big - number <= number - small || small <= 0 ){
        cout << big;
    }
    else{
        cout << small;
    }
    return 0;
}
