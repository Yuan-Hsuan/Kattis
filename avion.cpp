#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
    bool success = false;
    for(int i = 0; i < 5; i++) {
        string line;
        cin >> line;

        if(line.find("FBI") != -1) {
            cout << i+1 << " ";
            success = true;
        }
    }

    if(!success) {
        cout << "HE GOT AWAY!";
    }

}
