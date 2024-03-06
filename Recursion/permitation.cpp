#include <bits/stdc++.h> 
#include <string> 
using namespace std; 

void permute(string s, string answer) 
{ 
    unordered_set<char> mp;
	if(s.length() == 0) 
	{ 
		cout << answer << " "; 
		return; 
	} 
	for(int i = 0; i < s.length(); i++) 
	{ 
        if(mp.find(s[i])==mp.end());
        mp.insert(s[i]);
		char ch = s[i]; 
		string left_substr = s.substr(0, i); 
		string right_substr = s.substr(i + 1); 
		string rest = left_substr + right_substr; 
        // cout<<endl;
		permute(rest , answer+ch); 
	} 
} 
int main() 
{ 
	string s; 
	string answer = ""; 
	cout << "Enter the string : "; 
	cin >> s; 
	cout << permute(s, answer); 
	return 0; 
} 
