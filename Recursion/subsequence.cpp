#include<iostream>
#include<vector>
using namespace std;

void subsequence(vector<int> arr, int index, int n, vector<vector<int> > &ans, vector<int> &temp) {
    if (index == n) {
        ans.push_back(temp);
        return;
    }
     // include
    temp.push_back(arr[index]);
    subsequence(arr, index + 1, n, ans, temp);
    
    //backtracking step;
    temp.pop_back();

    // exclude
    subsequence(arr, index + 1, n, ans, temp);

}

int main() {
    vector<int> arr = {1, 2, 3};
    int n = arr.size();
    vector<vector<int> > ans;
    vector<int> temp;
    subsequence(arr, 0, n, ans, temp);

    // Print the subsequences
    for (const auto& subseq : ans) {
        cout << "[";
        for (int num : subseq) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}

// #include<iostream>
// #include<vector>
// using namespace std;
// void subset(string &s,int index, int n, vector<string> &ans,string &temp){
//     if(index==n){
//         ans.push_back(temp);
//         return;
//     }

//     //exclude
//     subset(s,index+1,n,ans,temp);
    
//     //include
//     temp.push_back(s[index]);
//     subset(s,index+1,n,ans,temp);

//     //backtrack
//     temp.pop_back();
// }

// void generate(int n,int left, int right,vector<string>&ans,string &temp){
//     if(left+right == 2*n){
//         ans.push_back(temp);
//         return;
//     }

//     //left paran
//     if(left<n){
//         temp.push_back('(');
//         generate(n , left+1,right,ans,temp);
//         temp.pop_back();
//     }

//     //right paran;
//     if(right<left){
//         temp.push_back(')');
//         generate(n,left,right+1,ans,temp);
//         temp.pop_back();
//     }
// }

// int main(){
//     string s = "abc";
//     vector<string>ans;
//     string temp;
//     subset(s,0,s.size(),ans,temp);
//     for(int i  = 0 ; i < ans.size(); i++){
//         cout<<ans[i]<<endl;
//     }
//     // int n;
//     // cout<<"Enter n: ";
//     // cin>>n;
//     // vector<string> ans;
//     // string temp;
//     // generate(n,0,0,ans,temp);

//     for(int i = 0 ; i < ans.size(); i++){
//         cout<<ans[i]<<endl;
//     }

// }
