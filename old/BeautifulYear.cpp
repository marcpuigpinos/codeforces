#include <iostream>
#include <string>
using namespace std;

bool repeatedNumber(int number){
    string snumber = to_string(number);
    int n=0;
    string s1, s2;
    for(string::iterator it=snumber.begin(); it!=snumber.end()-1; it++){
        s1 = *it;
        for (string::iterator jt=it+1; jt!=snumber.end(); jt++){
            s2 = *jt;
            if (s1.compare(s2) == 0) n++;
        }
    }
    bool repeat = false;
    if (n>0) repeat = true;
    return repeat;
}

int main(){
    int n;
    cin >> n;
    string s;
    bool repeat = true;
    while(repeat) {
        n++;
        repeat = repeatedNumber(n);
    }
    cout << n;
    return 0;
}
