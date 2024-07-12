#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string s;

    cin >> n;
    cin >> s;
    
    string l;
    int na{0};
    int nd{0};
    for(string::iterator it=s.begin(); it !=s.end(); it++){
        l = *it;
        if(l.compare("A")==0){
            na++;
        }else{
            nd++;
        }
    }
    if(na < nd){
        cout << "Danik\n";
    }else if(na > nd){
        cout << "Anton\n";
    }else{
        cout << "Friendship\n";
    }

    return 0;
}
