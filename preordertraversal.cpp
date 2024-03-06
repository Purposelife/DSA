#include<iostream>
#include<stack>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        data = data;
        left = NULL;
        right = NULL;
    }
};

Node* binarytree(){
    int x;
    // cout<<"Enter the value :";
    cin>>x;
    if(x==-1)
    return NULL;


    Node *temp = new Node(x);
    //left side create kiya
    cout<<"Enter the left child of "<<x << " : ";
    temp->left = binarytree();

    //right side create kiya
    cout<<"Enter the right child of "<<x << " : ";
    temp->right = binarytree();

    return temp;
}

// void preorder(Node* root){
//     stack<Node*> st;
//     st.push(root);
//     while(!st.empty()){
//         Node* temp = st.top();
//         st.pop();
//         cout<<temp->data<<" ";

//         if(temp->right)
//             st.push(temp->right);

//         if(temp->left)
//             st.push(temp->left);
//     }
// }


void preorder(Node* root){
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        Node* temp = st.top();
        st.pop();
        cout<<temp->data<<" ";

        // Push the right child first
        if(temp->right)
            st.push(temp->right);

        // Push the left child second
        if(temp->left)
            st.push(temp->left);
    }
}
void find(Node* root, int pos , int &l, int &r){
    if(!root)
        return;
    
    l = min(l,pos);
    r = max(r,pos);

    find(root->left,pos-1,l,r);
    find(root->right,pos+1,l,r);
}
vector<int> vertical(Node* root){
    int l = 0 , r = 0;
    find(root,0,l,r);

    vector<vector<int>>positive(r+1);
    vector<vector<int>>negative(abs(l+1));

    queue<Node*> q;
    queue<int>index;

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        int pos = index.front();
        index.pop();

        if(pos>0)
            positive[pos].push_back(temp->data);
        else
            negative[pos].push_back(temp->data);

        if(temp->left){
            q.push(temp->left);
            index.push(pos-1);
        }

        if(temp->right){
            q.push(temp->right);
            index.push(pos+1);
        }
        vector<int> ans;
        for(int i = negative.size() ; i> 0 ;i--)
        for(int j = 0; i <negative[i].size();j++)
        ans.push_back(negative[i][j]);

        for(int i = 0; i < positive.size() ;i--)
        for(int j = 0; i <positive[i].size();j++)
        ans.push_back(positive[i][j]);
    }
}


vector <int> diagnol(Node* root){
    int l = 0;
    find(root,0,l,r);
    vector<vector<int>>ans(l+1);
    finddiag(root,0,ans);
    vector<int> temp;

    for(int i = 0 ; i < ans.size() ; i++){
        for(int j = 0 ;j<ans[i].size();j++){
            temp.push_back(ans[i][j]);
        }
    }
}

int main(){
    cout<<"Enter the root Node: ";
    Node* root;
    root = binarytree();
    //preorder print
    preorder(root);
    vertical(root);
    
}