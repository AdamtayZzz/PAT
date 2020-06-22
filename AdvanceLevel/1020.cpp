    #include<iostream>
    #include<vector>
    #include<queue>
    using namespace std;
    struct Node{
        int val;
        Node *lchild;
        Node *rchild;
    };
    //s1,e1 后序 s2 e2前序
    Node *dfs(int s1,int e1,int s2,int e2,vector<int> post,vector<int> in){
        int head = post[e1];
        int index;
        for(int i=s2;i<=e2;i++){
            if(in[i]==head){
                index=i;
                break;
            }
        }
        Node* node = (Node*)malloc(sizeof(Node));
        node->val=head;
        node->lchild=nullptr;
        node->rchild=nullptr;
        if(index!=s2)
            node->lchild = dfs(s1,s1+index-s2-1,s2,index-1,post,in);
        if(index!=e2)
            node->rchild = dfs(s1+index-s2,e1-1,index+1,e2,post,in);
        return node;
    }
    int main()
    {
        int n;
        cin>>n;
        vector<int> post(n);
        vector<int> in(n);
        for(int i=0;i<n;i++){
            cin>>post[i];
        }
        for(int i=0;i<n;i++){
            cin>>in[i];
        }
        Node *tree = dfs(0,n-1,0,n-1,post,in);
        queue<Node*> q;
        bool flag=false;
        q.push(tree);
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                Node *node = q.front();
                q.pop();
                if(flag)
                    printf(" %d",node->val);
                else
                    printf("%d",node->val);
                flag=true;
                if(node->lchild!=nullptr)
                    q.push(node->lchild);
                if(node->rchild!=nullptr)
                    q.push(node->rchild);
            }
        }
        return 0;
    }
