//MergeSort used as it uses the divide and conquer approach and has a complexity of O(nlogn)

#include <iostream>
using namespace std;

void merge(int A[] , int lb , int rb , int ub )
{
  int i=0 , j=0 , k=lb ;
  int lsize = rb - lb + 1 ;
  int rsize = ub - rb  ;
  int left[lsize] , right[rsize] ;
  for(int z=0 ; z<lsize ; z++)
  {
    left[z] = A[lb + z];
  }
  for(int z=0 ; z<rsize ; z++)
  {
    right[z] = A[rb + 1 + z];
  }
  while(i<lsize && j<rsize)
  {
    if(left[i]>right[j])
    {
      A[k] = left[i] ;
      i++ ;
    }
    else
    {
      A[k] = right[j] ;
      j++;
    }
    k++ ;
  }
  while(i<lsize)
  {
    A[k] = left[i] ;
    k++ ;
    i++ ;
  }
  while(j<rsize)
  {
    A[k] = right[j] ;
    k++ ;
    j++ ;
  }
}

void mergesort(int A[] , int lb , int ub)
{
  if(lb>=ub)
    return ;
  int mid = (lb+ub)/2 ;
  mergesort(A , lb , mid ) ;
  mergesort(A, mid + 1 , ub) ;
  merge(A,lb ,mid ,ub) ;
}

int main()
{
  	int t ;
  	cin>>t ; 
  	while(t!=0)
    {
      int n ;
      cin>>n ;
      int *A ;
      A = new int[n] ;
     for(int i=0 ;i<n ; i++)
      cin>>A[i] ;
	 mergesort(A,0,n-1) ;
  	 for(int i=0 ;i<n ; i++)
      cout<<A[i]<<" " ;
     cout<<endl;
      t-- ;
    }
	return 0;
}