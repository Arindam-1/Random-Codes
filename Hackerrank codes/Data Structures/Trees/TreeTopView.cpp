#TOP VIEW OF A TREE

/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
void leftView(node *root)
{
    if(root!=NULL)
    {
        leftView(root->left);
        cout<<root->data<<" " ;
    }
    
}

void rightView(node *root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" " ;
        rightView(root->right);
    }
    
}

void topView(node * root) {
   leftView(root) ;
   rightView(root->right) ;
}
