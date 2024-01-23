#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void aa(int n,vector <int> add)
{
    int cou=0;
    int count=0;
    sort(add.begin(),add.end());
    for(int i=0;i<add.size();i++){
        if(add[i]==add[i+1])
auto it = remove(add.begin(), add.end(), add[i]);
    }
    
            
        
        
    
    cout<<count;
}
int main(){
    int n;
    cin>>n;
    vector <int> add;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        add.push_back(a);
    }
    aa(n,add);
}