#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<string, set<string>> report;

    int n;
    cin >> n;
    while( n != 0 ){
        string str;
        getline(cin, str);
        for( int i = 0; i < n; i++ ){
            
            getline(cin, str);

            //name
            auto start = str.find(" ");
            string name = str.substr(0, start);

            //item
            string item;
            start++;
            auto end = str.find(" ", start);
            while ( end != string::npos ) {
                item = str.substr( start, end-start);
                report.insert({ item, set<string>() });
                report.find(item)->second.insert(name);
                start = end + 1;
                end = str.find(" ", start);
                // cout << "item " << item << " ";
            }
            item = str.substr(start, end);
            report.insert({ item, set<string>() });
            report.find(item)->second.insert(name);
            // cout << "item " << item << " ";
            // cout << "\n";
        }

        // print
        for( auto& item : report ){
            cout << item.first;
            for( auto& name : item.second ){
                cout << " " << name;
            }
            cout << "\n";
        }
        cout << "\n";
        cin >> n;
        report.clear();
    }

    return 0;
}
