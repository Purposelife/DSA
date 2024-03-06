#include <iostream>
#include <stack>
using namespace std;

int findMaxDiff(int arr[], int n)
{
    // Your code here
    stack<int> st;
    vector<int> left(n, 0);
    vector<int> right(n, 0);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] > arr[i])
        {
            right[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[st.top()] > arr[i])
        {
            left[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    for (int i = 0; i < n; i++)
    {   
        if(right[i] > left[i])
        ans = max(ans, right[i] - left[i]);
        else
        ans = max(ans, left[i] - right[i]);
    }
    return ans;
}
void printarr(vector<int>&arr, int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {2, 4, 8, 7, 7, 9, 3};
    int n =  sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    printarr(left, n);
    printarr(right,n);
}