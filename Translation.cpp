#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    if (s1.size() != s2.size()){
        cout << "NO\n";
        return 0;
    }
    int count{0};
    char c1;
    char c2;
    for (std::string::size_type i = 0; i < s1.size(); i++) {
        c1=s1[i];
        c2=s2[s1.size()-1-i];
        if (c1==c2) count++;
    }
    if (count == s1.size()){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    return 0;
}
