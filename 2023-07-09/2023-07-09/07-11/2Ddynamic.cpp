#include<iostream>
using namespace std;

int main(){

    // int n;
    // cin>>n;

    // int **arr = new int*[n];

    // //creating array
    // for(int i =0;i<n ;i++){
    //     arr[i] = new int[n];
    // }

    // for(int i = 0;i<n;i++){
    //     for(int j =0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // //printing output
    // for(int i = 0;i<n;i++){
    //     for(int j =0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int row;
    int col;
    cout<<"Enter row and columns: ";
    cin>>row;
    cin>>col;

    int** arr = new int*[row];
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }
    

    //taking input
    for(int i =0 ;i<row ; i++){
        for(int j =0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //printing output
    for(int i =0;i<row ;i++){
        for(int j =0;i<col;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    //releasing memory;
    for(int i =0;i<row;i++){
        delete [] arr[i];
    }
    delete []arr;
}