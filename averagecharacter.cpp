#include<bits/stdc++.h>

# define M_PI           3.14159265

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
	string line;

	int num = 0;
	int total = 0;

	getline( cin, line );

	for( int i = 0; i < line.length(); i++ ){
		total += int(line[i]);
		num++;
	}

	char temp = total/num;
	cout << temp;
    
    return 0;
}

