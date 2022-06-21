#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<char> string;

    char s;
    while( cin >> s ){
        if( s == '<' && !string.empty() ){
            string.pop_back();
        }
        else{
            string.push_back(s);
        }
    }

    for( int i = 0; i < string.size(); i++ ){
        cout << string[i];
    }

    return 0;
}
