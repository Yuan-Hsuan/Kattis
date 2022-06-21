#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
	int n;
    cin >> n;

    float num = 0;
    int real = 0;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;

        if(temp >= 0) {
            real++;
            num += temp;
        }
    }

    cout << num/real << endl;
    
    return 0;
}

