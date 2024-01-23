#include <iostream>
#include <vector>
#include <string>
using namespace std;
void funn(int n,string s,vector<string>arr){
    for(int i=0;i<n;i++)
    {
        
        cout<<arr[i]<<i+1;
    }


}
int main()
{
    int n;
    cin>>n;
    string s;
    
    vector<string> arr(n);
    while( cin >> s )
    {
        if(s == "-1") break;
        arr.push_back(s);
    }
    funn(n,s,arr);

}