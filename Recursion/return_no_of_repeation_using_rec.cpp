#include<iostream>

using namespace std;

int repetation(int arr[],int n,int x,int output[],int i){

    if(arr[n-1]==x){
        output[i]=arr[n-1];
        i++;
    }
    else if(n==0){
        return i;
    }
   i=repetation(arr,n-1,x,output,i);

   return i;

}

int main()
{
    int n,x,i=0;
    cout<<"enter size of array\n";
    cin>>n;
    int* arr=new int[n];
    int* output=new int[n];

    cout<<"enter number\n";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"enter which repetation number you want to check\n";
    cin>>x;

    cout<<repetation(arr,n,x,output,i)<<" times "<<x<<" is occurs\n";

    delete []arr;
    delete []output;



return 0;
}