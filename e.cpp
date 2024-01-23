#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int  main(){
    
    string a;
    cin>>a;
    string s;
    char c;
    for(int i=0;i<a.length();i++){
        c=tolower(a[i]);
        s.push_back(c);
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
}