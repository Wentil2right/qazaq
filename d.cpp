#include <iostream>
#include <list>
void fii(int n,int k,std::list <int> ss)
{
    int aa=0;
    for(auto it=ss.begin();it!=ss.end();it++){
        if(*it==k){
            aa++;
        }
    }
    std::cout<<aa;
}
int main(){
    int n,k;
    std::cin>>n>>k;
    std::list <int> ss;
    int a;
    for(int i=0;i<n;i++){
        std::cin>>a;
        ss.push_back(a);
    }
    fii(n,k,ss);


}