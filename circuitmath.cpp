#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<char> truthvalue;

    for( int i = 0; i < n; i++ ){

        char var;
        cin >> var;
        truthvalue.push_back(var);
    }

    char temp;
    vector<char> circuit;

    while( cin >> temp ){
        int pos = temp - 'A';
        if( pos <= 25 && pos >= 0 ){
            circuit.push_back(truthvalue[pos]);
        }
        else{
            circuit.push_back(temp);
        }
        
    }

    while( circuit.size() != 1 ){
        // for( int i = 0; i < circuit.size(); i++ ){
        //     cout << circuit[i];
        // }
        // cout << "\n";
        for( int i = 0; i < circuit.size(); i++ ){
            if( circuit[i] == '*' ){
                // cout << "*" << "\n";
                char A = circuit[i-2];
                char B = circuit[i-1];
                char ans = 'F';
                if( A == 'T' && B == 'T' ){
                    ans = 'T';
                }
                circuit[i] = ans;
                // cout << i << "*" << ans << "\n";
                circuit.erase( circuit.begin() + i - 2, circuit.begin() + i );
                break;
            }
            else if( circuit[i] == '+' ){
                // cout << "+" << "\n";
                char A = circuit[i-2];
                char B = circuit[i-1];
                char ans = 'T';
                if( A == 'F' && B == 'F' ){
                    ans = 'F';
                }
                circuit[i] = ans;
                // cout << i << "+" << ans << "\n";
                circuit.erase( circuit.begin() + i - 2, circuit.begin() + i );
                break;
            }
            else if( circuit[i] == '-' ){
                char B = circuit[i-1];
                char ans = 'T';
                if( B == 'T' ){
                    ans = 'F';
                }
                circuit[i] = ans;
                // cout << ans << endl;
                circuit.erase( circuit.begin() + i - 1 );
                break;
            }
        }
    }
    cout << circuit[0];

    return 0;
}
