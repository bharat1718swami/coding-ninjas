#include<iostream>

using namespace std;

int checkindex(int a[],int n,int x){
      if(a[n-1]==x)return n-1;
      else if(n==0) return -1;
      return checkindex(a,n-1,x);
}

int main()
{
    int n,x;
    int* a= new int[n];

    cout<<"enter size of an array\n";
    cin>>n;

    cout<<"enter number\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"enter number which you want to check\n";
    cin>>x;

    cout<<"index= "<<checkindex(a,n,x);
    delete []a;



return 0;
}