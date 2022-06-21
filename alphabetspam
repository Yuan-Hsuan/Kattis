#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string line;
    cin >> line;
    
    int space = 0;
    int lower = 0;
    int upper = 0;
    int symbol = 0;
    float num = line.length();

    for( int i = 0; i < line.length(); i++ ){
        if( line[i] >= 65 && line[i] <= 90 ){
            upper++;
        }else if( line[i] >= 97 && line[i] <= 122 ){
            lower++;
        }else if( line[i] == '_' ){
            space++;
        }
        else{
            symbol++;
        }
    }
    cout << space / num << "\n";
    cout << lower / num << "\n";
    cout << upper / num << "\n";
    cout << symbol / num;
    return 0;
}
