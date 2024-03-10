//Revision.
#include<iostream>
#include<queue>
#include<stack>
using namespace std;


void Preorder(Node* root){
    if(!root)
        return;
    
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

void postorder(Node* root){
    if(!root)
        return;
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void inorder(Node* root){
    if(!root)
        return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(roo->right);
}

void levelorder(Node* root){
    queue<Node*> q;
    vector<int> ans;

    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        ans.push_back(temp->data);

        if(temp->left)
            q.push(temp->left);
        
        if(temp->right)
            q.push(temp->right);
    }
    return ans;
}


void countnode(Node* root){
    queue<Node*> q;
    int count = 0;
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        count++;
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }   

}
void countleaves(Node* root){
    if(!root)
        return;
    int count = 0;

    if(!root->left && !root->right)
        count++;

    countleaves(root->left);
    countleaves(root->right);
}


void nonleaf(Node* root){
    if(!root)
        return;
    
    if(root->left != NULL || root->right != NULL)
        count++;
    
    nonleaf(root->left);
    nonleaf(root->right);
}

void height(Node *root){
    if(!root)
        return;
    
    return 1 + max(height(root->right),height(root->left));
}


void maxineach(Node* root){
    queue<Node*> q;
    vector<int>ans;
    q.push(root){
        int maxval = q.front()->data;
        int size = q.size();
        for(int i = 0;i<size;i++){
            Node* temp = q.front();
            q.pop();
            if(temp->left)
                q.push(temp->left);
            
            if(temp->right)
                q.push(temp->right);

            maxval = max(maxval,temp->data);
        }
        ans.push_back(maxval);
    }
    return ans;
}



void spirallevel(Node* root){
    stack<Node*> s1;
    stack<Node*>s2;
    vector<int> ans;

    s1.push(root);

    while(!s1.empty() || !s2.empty()){
        if(!s1.empty()){
            While(!s1.empty()){
                Node* temp = s1.top();
                s1.pop();
                ans.push_back(temp->data);

                if(temp->right)
                    s2.push(temp->right);
                if(temp->left)
                    s2.push(temp->left);
                
            }
        }
        else{
            while(!s2.empty()){
                Node* temp = s2.top();
                s2.pop();
                ans.push_back(temp->data);

                if(temp->left)
                    s1.push(temp->left);
                if(temp->right)
                    s1.push(temp->right);
            }
        }
    }
}

void leftview(Node *root){
    queue<Node*> q;
    vector<int> ans;
    q.push(root);
    while(!q,empty()){
        int n = q.size();
        ans.push_back(q.front()->data);
        while(n--){
            Node* temp = q.front();
            q.pop();

            if(temp->left)
                q.push(temp->left);

            if(temp->right)
                q.push(temp->right);
        }
    }
    return ans;
}

void rightview(Node* root){
    queue<Node*> q;
    vector<int> ans;
    while(!q.empty()){
        int n = q.size();
        ans.push_back(q.front()->data);
        while(n--){
            Node* temp = q.front();
            q.pop();

            if(temp->right)
                q.push(temp->right);

            if(temp->left)
                q.push(temp->left);
        }
    }
    return ans;
}


//recursive approach
void leftview(Node* root, int level , vector<int>& ans){
    if(!root)
        return;

    //dekho in left view hum left me ja rahe hai so left me jane ke waqt 
    //we just goo and print the first appering  node at every level and
    //keep moving to nect level we dont repeat the node of same level
    //by usign level == ans.size() we can get to know if the visited node is 
    //first time of not.

    if(level == ans.size())
        ans.push_back(root->data);

    leftview(root->left,level+1,ans);
    leftview(roo->right,level+1,ans);
}

void rightview(Node* root, int level, vecot<int>&ans){
    if(!root)
        return;

    if(level == ans.size())
        ans.push_back(root->data);
    
    rightview(root->right,level+1,ans);
    rightview(root->left,level+1,ans);
}

void leftview(Node* root, int level , vector<int> &ans){
    if(!root)
        return;

    if(ans.size() == level)
        ans.push_back(root->data);

    leftview(root->left,level+1,ans);
    leftview(root->right,level+1,ans);
}

//iterative appraoach
void left(Node* root){
    queue<Node*> q;
    vector<int> ans;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        ans.push_back(root->data);
        while(n--){
            Node*temp = q.front();
            q.pop();
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
    return ans;
}


void left(Node* root){
    queue<Node*> q;
    vector<int>ans;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        ans.push_back(root->data);
        while(n--){
            Node* temp = q.front();
            q.pop();
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }
    return ans;
}
void find(Node* root, int pos, int &l, int &r){
    if(!root)
        return;
    
    l = min(l, pos);
    r = max(r,pos);

    find(root->left,pos-1,l,r);
    find(root->right,pos+1,l,r);
}

void topview(Node* temp){
    int l = 0;
    int r = 0;
    vector<int>ans(abs(l)+r+1);
    vector<int>visited(abs(l)+r+1,0);
    queue<Node*> q;
    queue<int> index;
    q.push(root);
    index.push(abs(l));
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        int pos = index.front();
        index.pop();

        if(!visited[pos]){
            visited[pos]=1;
            ans[pos] = temp->data;
        }

        if(temp->left){
            q.push(temp->left);
            index.push(pos-1);
        }
        if(temp->right){
            q.push(temp->right);
            index.push(pos+1);
        }
    }
    return ans;
}


//using recursion.
void top(Node* root,int pos,vector<int>&ans,vector<int>&level,int l)
{
    if(!root)
        return;
    
    /*
        when we push data to ans is whenever the given is lesser than the already present in level array ans update the answer and array too.
    */
    if(level[pos]>l)
    {
        ans[pos]= root->data;
        level[pos] = l;
    }
    /*
    lets understand this 
    we go to left once and rigght once

    while going to left what we do is decrease the position by 1 and increase the level of tree by 1.

    while going to left what we do is indcrese the position by 1 and increase the level of tree by 1.

    */
    top(root->left,pos-1,ans,level,l+1);
    top(root->right,pos+1,ans,level,l+1);
}

void topview(Node* root){
    int l = 0, r = 0;
    find(root,0,l,r);
    vector<int>ans(abs(l)+r+1);
    vector<int>level(abs(l)+r+1);
    top(root,abs(l),ans,level,0);

    return ans;
}

void boundarytraversal(Node* root){
    vector<int> ans;
    ans.push_back(root);
    left(root->left,ans);

    //root
    if(root->left || root->right)
        root(root,ans);
    right(root->right,ans);
}
//left me jao par leaf node ko chodkar
void left(Node* root, vecotor<int>&ans){
    if(!root || !(root->left) && !(root->right))
        return;
    ans.push_back(root->data);
    if(root->left)
        left(root->left,ans);
    else
        left(root->right,ans);
}
//sare leaf ko print karado
void leaf(Node* root,vecot<int>&ans){
    if(!root)
        return;
    if(!root->left && !root->right)
        ans.push_back(root->data);
    leaf(root->left,ans);
    leaf(root->right,ans);
}
//right me jao par leaf node chodkar
void right(Node* root,vector<int>&ans){
    if(!root || !(root->left) && !(root->right))
        return;
    if(root->right)
        right(root->right,ans);
    else
        right(root->left,ans);

    ans.push_back(root->data);
}

// Diagonal Travesal;
void diagonaltraversal(Node* root){
    int l = 0,
    find(root,0,l);

    vector<vector<int>>ans(l+1);
    finddiag(root,0,ans);

    vector<int>temp;

}

void finddiag(Node* root, int pos, vector<vector<int>>&ans){
    if(!root)
        return;
    
    ans[pos].push_back(root->data);
    finddiag(root->left,pos+1,ans);
    finddiag(root->right,pos,ans);
}


void verticaltrevaersal(Node* root){
    int l = 0;
    int r = 0;
    find(root,0,l,r);
    vector<int>ans(abs(l)+r+1);
    vector<vectot<int>positive(r+1);
    vector<vector<int>negative(abs(l)+1);
    queue<Node*> q;
    queue<int> index;

    q.push(root);
    index.push(0);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        int pos = index.pop();
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
        /*
        for answer we traverse it we traverse the negative in backward direction and 
        poritive in forward direction to get the answer.
        */
    }

}

