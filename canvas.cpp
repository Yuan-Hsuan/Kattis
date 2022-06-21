#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    stack<char> delimiter;

    long long L;
    cin >> L;

    string line;
    getline(cin, line);
    getline(cin, line);
    stringstream ss(line);

    char c;
    
    for( int i = 0; i < L; i++ ){

        ss >> noskipws >> c;

        switch (c)
        {
        case '(':
            delimiter.push(c);
            break;
        case '[':
            delimiter.push(c);
            break;
        case '{':
            delimiter.push(c);
            break;
        case ')':
            if( delimiter.empty() ){
                cout << c << " " << i<< endl; 
                return 0;
            }
            
            if( delimiter.top() != '(' ){
                cout << c << " " << i<< endl; 
                return 0;
            }
            delimiter.pop();
            break;
        case ']':
            if( delimiter.empty() ){
                cout << c << " " << i<< endl;  
                return 0;
            }
            if( delimiter.top() != '[' ){
                cout << c << " " << i<< endl; 
                return 0;
            }
            delimiter.pop();
            break;
        case '}':
            if( delimiter.empty() ){
                cout << c << " " << i<< endl; 
                return 0;
            }
            if( delimiter.top() != '{' ){
                cout << c << " " << i << endl; 
                return 0;
            }
            delimiter.pop();
            break;
        
        default:
            break;
        }
    }
    cout << "ok so far";
    return 0;
}
