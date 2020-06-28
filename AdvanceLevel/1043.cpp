    #include<iostream>
    #include<map>
    #include<vector>
    #include<algorithm>
    using namespace std;
    struct node{
        int value;
        node *rchild;
        node *lchild;
    };
    vector<int> input;
    vector<int> output;
    node* construct(int s,int e){
        node* head = (node*)malloc(sizeof(node));
        head->lchild=nullptr;
        head->rchild=nullptr;
        head->value=input[s];
        if(s>e)
            return nullptr;
        if(s==e)
            return head;
        int i;
        for(i=s+1;i<=e;i++){
            if(input[i]>=input[s])
                break;
        }
        head->lchild=construct(s+1,i-1);
        head->rchild=construct(i,e);
        return head;
    }
    node* construct_mirror(int s,int e){
        node* head = (node*)malloc(sizeof(node));
        head->lchild=nullptr;
        head->rchild=nullptr;
        head->value=input[s];
        if(s>e)
            return nullptr;
        if(s==e)
            return head;
        int i;
        for(i=s+1;i<=e;i++){
            if(input[i]<input[s])
                break;
        }
        head->rchild=construct_mirror(s+1,i-1);
        head->lchild=construct_mirror(i,e);
        return head;
    }
    void postOrder(node *head){
        if(head->lchild!=nullptr)
            postOrder(head->lchild);
        if(head->rchild!=nullptr)
            postOrder(head->rchild);
        output.push_back(head->value);
    }
    void postOrder_mirror(node *head){
        if(head->rchild!=nullptr)
            postOrder_mirror(head->rchild);
        if(head->lchild!=nullptr)
            postOrder_mirror(head->lchild);
        output.push_back(head->value);
    }
    int get_max(node *head){
        while(head->rchild!=nullptr)
            head = head->rchild;
        return head->value;
    }
    int get_min(node *head){
        while(head->lchild!=nullptr)
            head = head->lchild;
        return head->value;
    }
    bool check(node *head){
        bool left=true,right=true;
        if(head->lchild!=nullptr){
            left = (head->value>get_max(head->lchild))&&(check(head->lchild));
        }
        if(head->rchild!=nullptr){
            right = (head->value<=get_min(head->rchild))&&(check(head->rchild));
        }
        return left&&right;
    }
    int main()
    {
        int n;
        cin>>n;
        int t;
        for(int i=0;i<n;i++){
            cin>>t;
            input.push_back(t);
        }
        node* head = construct(0,n-1);
        node* head2 = construct_mirror(0,n-1);
        if(check(head)){
            cout<<"YES"<<endl;
            output.clear();
            postOrder(head);
            for(int i=0;i<n;i++){
                printf("%d",output[i]);
                if(i!=n-1)
                    printf(" ");
            }
        }
        else if(check(head2)){
            cout<<"YES"<<endl;
            output.clear();
            postOrder_mirror(head2);
            for(int i=0;i<n;i++){
                printf("%d",output[i]);
                if(i!=n-1)
                    printf(" ");
            }
        }
        else{
            cout<<"NO";
        }
        return 0;
    }
