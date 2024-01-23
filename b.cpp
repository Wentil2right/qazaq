#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void func(int n,vector <int> arr)
{   
    vector <int> aa;
    vector <int> bb;
    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]%2==0)
        {
            aa.push_back(arr[i]);
            
        }
        else
        {
            bb.push_back(arr[i]);

        }
    }
    reverse(aa.begin(),aa.end());
    

    for(int i=0;i<aa.size();i++)
    {
        cout<<aa[i]<<" ";
    }
    for(int i=0;i<bb.size();i++)
    {
        cout<<bb[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    vector <int> arr;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    func(n,arr);
    

}