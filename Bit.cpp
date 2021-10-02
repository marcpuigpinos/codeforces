#include <iostream>
#include <string>
using namespace std;

int main(){
	int res=0;
	int n;
	cin >> n;
	if (n==0){
		cout << res;
		return 0;
	}
	string cmd[n];
	for (int i=0; i<n; i++){
		cin >> cmd[i];
	}
	string wrd;
	for (int i=0; i<n; i++){
		wrd = cmd[i];
		if (wrd.compare("++X")==0 || wrd.compare("X++")==0){
		      ++res;
	      	}else if(wrd.compare("--X")==0 || wrd.compare("X--")==0){
	  	      --res;
      		}		      
	}
	cout << res;
	return 0;
}
