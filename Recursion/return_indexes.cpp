#include<iostream>

using namespace std;

int allIndexes(int input[], int size, int x, int output[]) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */
   // static int count=0;
         if(size){
            if(input[size-1]==x){
            
                *output=size-1;
            return allIndexes(input,x,--size,output++);
        
        }
        else {
            
            return allIndexes(input,x,--size,output);
        }

        cout<<(sizeof(output))/(sizeof(output[0]))<<endl;
     }
        else return output[0];
    }


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}
