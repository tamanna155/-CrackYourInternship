// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    //Create a sample vector array
    int a[5]={0,1,0,3,12};
    int len=sizeof(a)/sizeof(int);
    cout<<"Initial Array: ";
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
    
    cout<<endl;
    
    //Declare a pointer to keep track of
    int j=0;
    for(int i=0;i<len;i++){
        //Check for all non zero elements
        if(a[i]!=0){
            //swap the non zero element to the pointer located at
            a[j]=a[i];
            j++;
        }
    }
    
    //Relocate back the zeros at the end
    while(j<len){
        a[j]=0;
        j++;
    }
    
    //Resultant array
    cout<<"Resultant Array: ";
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}