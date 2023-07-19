#include<iostream>
using namespace std;

int main(){
    // int arr[10] = {23,12,32,43,23,43};

    // cout<<"Address of 1st element is "<<arr<<endl;
    // cout<<"Address of 2nd element is "<<&arr[1]<<endl;

    // int i = 3;

    // cout<<i[arr]<<endl;
    // return 0;
    // int temp[10];
    // cout<<sizeof(temp)<<endl;

    // int *ptr = &temp[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;

    int arr[10];
    //ERROR
    //arr= arr+1;

    int *p = &arr[0];

cout<<&p<<endl;
    p = p+1;

    cout<<p<<endl;
}
