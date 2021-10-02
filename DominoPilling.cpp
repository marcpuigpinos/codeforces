#include <iostream>
using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	int sq = m*n;
	if ( (sq)%2 == 0){
		cout << sq/2; 
	}else{
		cout << (sq-1)/2;
	}
	return 0;
}

