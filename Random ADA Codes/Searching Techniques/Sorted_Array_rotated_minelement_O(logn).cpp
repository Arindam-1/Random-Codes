//Sorted array with distinct elements rotated at some point , find min element with expected time complexity O(logn)
//IMP , Got O(logn) complexity using a kind of binary search
#include <iostream>
using namespace std; 
int returnsmallest(int A[] , int lowerbound , int upperbound)
{
  if(A[upperbound]>A[lowerbound])		//Not rotated implying the first element to be the smallest
    return A[lowerbound] ;
  if(lowerbound==upperbound)			//Only one element
    return A[lowerbound] ;
  int mid = (lowerbound + upperbound)/2 ;
  while(lowerbound<=upperbound)
  {
    mid = (lowerbound+upperbound)/2 ;
    if(A[mid]<A[mid-1])				// 4 5 1 2 3
    {
      return A[mid] ;
      break ;
    }
    else if(A[mid]>A[mid+1])		// 3 4 5 1 2 
    {
      return A[mid+1] ;
      break ;
    }
    else if(A[upperbound]>A[mid])	// 5 1 2 3 4
      upperbound = mid-1 ;
    else
      lowerbound = mid+1 ;			// 2 3 4 5 1 
    
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
      cout<<returnsmallest(A,0,n-1)<<endl  ;
      t--;
    }
	return 0;
}
