void Reverse(Node *p)
{
  if(p->next==NULL)
  {
	head = p ;
	return ;
  }
  Reverse(p->next) ;
  Node *temp = p->next ;
  temp->next = p ;
  p->next = NULL ;
}