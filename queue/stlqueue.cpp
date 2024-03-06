//standard templete library;
/*oprearion praformed
push
pop
size
front      back
empty
*/
#include<iostream>
#include<queue>
#include<stack>
using namespace std;


int main()
{
    queue<int> q;
    stack<int>st;
    q.push(101);
    q.push(102);
    q.push(103);
    q.push(104);
    q.push(105);
    q.push(106);
    
    int n = q.size();
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    while(n--){
        cout<<q.front()<<endl;
        q.push(q.front());
        q.pop();
    }
}