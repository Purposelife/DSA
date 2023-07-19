#include<bits/stdc++.h>
using namespace std;
// void reverse(int arr[],int n){
//     int start = 0;
//     int end = n;
//     while(start < end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// void print_arr(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     reverse(arr,6);
//     print_arr(arr,6);
// }
vector<int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;

    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<< v[i] <<" ";
    }
    cout<<endl;
}

int main(){
    vector <int> v;
    v.push_back(11);
    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);

    print(v);
    vector<int> ans = reverse(v);
    print(ans);

    return 0; 
}