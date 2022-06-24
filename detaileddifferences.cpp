#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    string temp;
    getline( cin, temp );
    for(int i = 0; i < n; i++) {
        string line1, line2;
        getline(cin, line1);
        getline(cin, line2);

        cout << line1 << "\n";
        cout << line2 << "\n";

        for(int j = 0; j < line1.size(); j++) {
            if(line1[j] == line2[j]) {
                cout << '.';
            }
            else {
                cout << '*';
            }
        }

        cout << "\n\n";
    }
    
    return 0;
}
