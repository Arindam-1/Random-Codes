//VVIMP : LEVEL ORDER TRAVERSAL ,USES QUEUE AND STL



#include<queue>
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) {
  if(root==NULL)
      return;
   else
   {
      queue<node*> Q ;
      Q.push(root) ;
      while(!Q.empty())
      {
          node* current = Q.front() ;
          cout<<current->data<<" " ;
          if(current->left!=NULL)
              Q.push(current->left) ;
          if(current->right!=NULL)
              Q.push(current->right) ;
          Q.pop() ;
      }
   }
  
}
