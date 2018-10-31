/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  Node *current , *prev , *forward ;
  current = head ;  
  prev = NULL ;
  while(current!=NULL)
  {
      forward = current->next ;
      current->next = prev ;
      prev = current ;
      current = forward ;
  } 
  head = prev ;
  return head ;
}