#include <iostream>
using namespace std;

int main(){
	const int target[2] = {2,2};
	int matrix[5][5];
	int i=0;
	while(i<5){
		cin >> matrix[i][0] >> matrix[i][1] >> matrix[i][2] >> matrix[i][3] >> matrix[i][4];
		i++;
	}
	i=0;
	// Localize the position of the one.
	int pos[2];
	for (i=0;i<5;i++){
		for (int j=0;j<5;j++){
			if (matrix[i][j]==1){
				pos[0] = i;
				pos[1] = j;
				i=5;
				j=5;
			}
		}
	}
	int mvs = 0;
	mvs += abs(pos[0]-target[0]);
	mvs += abs(pos[1]-target[1]);
	cout << mvs;
	
	return 0;
}
