#include <iostream>
using namespace std;

int main(){
	int n, exit, enter;
	cin >> n;
	int stop{0}, passengers{0}, maxCapacity{0};
	while(stop<n){
		cin >> exit >> enter;
		passengers += enter - exit;
		if (passengers > maxCapacity) maxCapacity = passengers;
		stop++;
	}
	cout << maxCapacity;
}
