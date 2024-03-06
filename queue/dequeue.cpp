#include<iostream>
#include<deque>
#include<stack>
using namespace std;

int prec (char c){
    if(c == '^'){
        return 3;
    }
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else 
        return -1;
}

string infixtopost(string s){
    stack<char> st;
    string res;
    for(int i = 0 ; i <s.length() ; i++){
        char ch = s[i];
        if((ch >= 'A' && ch =<'Z' ) ||(ch >= 'a' && ch =<'z' ) ||(ch >= '0' && ch =<'9' )){
            res += ch;
        }
        else if(s[i] == '(')
            s.push(ch)
        else if(ch == ')'){
            while(!st.empty() && st.top != '('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty())
            st.pop();
        }
        else{
            while(!st.isEmpty() && prec(st.peek()) >= prec(str.charAt(i))){
                res+=st.top();
                st.pop();
            }
        }
    }

    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}
int main(){
    
}