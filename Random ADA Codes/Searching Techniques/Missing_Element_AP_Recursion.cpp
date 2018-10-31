//Missing element of an AP ( I used recursion)
//USED Recursion ( Could have done it in an easier way but I guess it would have a worse time complexity
#include <iostream>
using namespace std ;
int findmissing(int A[] , int n , int i)
{
  if(i==(n-1))
    return -1 ;
  if(i!=0)
  {  int diff1 = A[i] - A[i-1] ;
  	 int diff2 = A[i+1] - A[i] ;
  
  if(diff1==diff2)
    findmissing(A,n,i+1) ;
  else if(diff1<diff2)
    return A[i] + diff1 ;
  else
    return A[i-1] + diff2 ;
  }
}
    
int main()
{
	int t ;
  	cin>>t ;
  	while(t!=0)
    {
      int n , i ;
      cin>>n ;
      int A[n] ;
      for(i=0 ; i<n ; i++)
        cin>>A[i] ;
      cout<<findmissing(A,n,1)<<endl ;
      t-- ;
    }
	return 0;
}