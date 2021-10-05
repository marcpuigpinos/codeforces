#include <iostream>
using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	char queue[n];
	for (int i=0; i<n; i++){
		cin >> queue[i];
	}
	bool exit = false;
	for (int i=0; i<t; i++){
		int j=0;
		while(!exit){
			if (j>=n) break;
			if (queue[j]=='B' && queue[j+1]=='G'){
				char a = queue[j];
				queue[j] = queue[j+1];
				queue[j+1] = a;
				j+=2;
			} else {
				j++;
			}
		}
	}
	for (int i=0; i<n; i++){
		cout << queue[i];
	}
}
