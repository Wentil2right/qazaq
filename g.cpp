#include <iostream>
#include <queue>
using namespace std;
void aa(queue <int> ss){
    while(!ss.empty()){

        cout<<ss.front();
        ss.pop();
    }
}

int main(){
    int n;
    cin>>n;
    int a;
    queue <int> ss;
    
    for(int i=0;i<n;i++){
        cin>>a;
        ss.push(a);
    }
    aa(ss);



}