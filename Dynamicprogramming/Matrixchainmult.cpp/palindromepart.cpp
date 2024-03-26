#include <iostream>
#include <cstring>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

int static t[501][501];

bool palindrome(const string& s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int solve(const string& s, int i , int j) {
    
    if (t[i][j] != -1){
        return t[i][j];
    }
    
    if (palindrome(s, i, j)== true) { 
        return 0;
    }
    
    if (i >= j)
        return 0;
        
    int mini = INT_MAX;
    for (int k = i ; k < j ; k++) {
        
        int tempans = solve(s, i, k) + solve(s, k + 1, j) + 1;
        
        mini = min(mini, tempans);
    }
    return t[i][j] = mini;
}

    int palindromicPartition(string str)
    {
        // code here
        int n = str.size();
        memset(t,-1,sizeof(t));
        return solve(str,0,n-1);
    }

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    cout << "Minimum number of partitions needed: " << palindromicPartition(str) << endl;
    return 0;
}
