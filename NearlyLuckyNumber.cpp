#include <iostream>
#include <string>
using namespace std;

int main(){

    string n;
    getline(cin,n);
    int nl{0};
    string s;
    for (std::string::size_type i = 0; i < n.size(); i++) {
        s = n[i];
        if (stoi(s)==4 || stoi(s)==7) nl++;
    }
    if (nl==4 || nl==7){
        cout << "YES\n";
    }else{
        cout <<"NO\n";
    }
    return 0;
}
