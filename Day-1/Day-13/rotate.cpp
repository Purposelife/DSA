#include<iostream>
using namespace std;
void swap(int x,int y){
    int temp = x;
    x = y;
    y = temp;
}
void printmat(int matrix[][3],int row ,int col){
    for(int i=0;i<row;i++){
        for(int j = 0 ;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int mat [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0;i<3;i++){
        for(int j = 0; j < 3 ; j++){
            
        }
    }
    printmat(mat,3,3);

    return 0;
}