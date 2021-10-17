#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	char queue[n];
	char auxqueue[n];
	for(int i=0; i<n; i++){
		cin >> queue[i];
	}
	for (int j=0; j<t; j++){
		for (int i=0; i<n-1; i++){
			if (queue[i]=='B' && queue[i+1]=='G'){
				auxqueue[i]='G';
				auxqueue[i+1]='B';
			} else {
				auxqueue[i]=queue[i];
				auxqueue[i+1]=queue[i+1];
			}
		}
		cout << queue << "\n";
		cout << auxqueue << "\n";
	}
	return 0;
}
