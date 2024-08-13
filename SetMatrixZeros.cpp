// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Write C++ code here
    int mat[3][4]={{1,1,1,7},{1,0,1,5},{1,1,1,4}};
    int row=sizeof(mat)/sizeof(mat[0]);
    int col=sizeof(mat[0])/sizeof(int);
    
    cout<<"Initial matrix: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    bool firstRow=false;
    bool firstcol=false;
    //Marking the first rows and columns as 0s and respective number by travesring through rows and columns
    
    //Traversing through each element to check for 0's
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            //If any occurence of 0 appears
            if(mat[i][j]==0){
                //If it appears in first row, set first row to 0 and true and vice versa for columns
                if (i==0){
                    firstRow=true;
                }
                if (j==0){
                    firstcol=true;
                }
                
                //Further mark the values to 0
                mat[i][0]=0; //Col marker
                mat[0][j]=0; //Row marker
            }
            
        }
    }
    
    //Following the same process and marking the inner rows and columns as 0 wherever needed
    
    //Traversing through inner(1) rows and cols to check for it row and col marker values and interchange the orignal value accordingly
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            //Check for markers of rows and cols
            if(mat[i][0]==0 || mat[0][j]==0){
                mat[i][j]=0;
            }
        }
    }
    
    //Lastly check for 0's in the orignal outer rows and cols
    if(firstRow){
        for(int i=0;i<col;i++){
            mat[0][i]=0;
        }
    }
    if(firstcol){
        for(int i=0;i<row;i++){
            mat[i][0]=0;
        }
    }
    
    //Accessing the elements
    cout<<"Resultant matrix: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}