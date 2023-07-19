#include<iostream>
using namespace std;

void print(int arr[],int size){
    cout<<"printing the aray: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printed"<<endl;
}
void printarr(char arr[],int size){
    cout<<"printing the aray: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printed"<<endl;
}
int main(){
    int number[15];
    cout<<"value of index 0 is: "<<number[0]<<endl;
    cout<<"Everything is fine "<<endl<<endl;

    int arr[3]={5,7,3};
    cout<<"value at second is "<<arr[2]<<endl;
    print(arr,3);

    char ch[10]={'a','b','c','d','e','f','g','h'};
    printarr(ch,10);

}