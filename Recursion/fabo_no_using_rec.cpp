#include<iostream>

using namespace std;

int febo(int n){
    if(n==0) return 0;
    if(n==1)return 1;
   
    return febo(n-1)+febo(n-2);
}

int main()
{
    int n;
    cout<<"enter position number of febo series\n";
    cin>>n;
    cout<<febo(n);

return 0;
}