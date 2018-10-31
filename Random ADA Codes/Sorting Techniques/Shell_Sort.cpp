//Shell sort Algorithm https://www.youtube.com/watch?v=3yUSDJVDk4E 
// Example : Array is 3 8 1 4 2

#include <iostream>
using namespace std;
void shellsort(int A[] , int n)
{
  int gap = n/2 ;					
  while(gap>0)														//Loop 1
  {
    int j=0 ;
    for(int i=gap ; i<n ; i++)										//Loop  2
    {
      int temp = A[i] ;
      for(j=i ; j>=gap && A[j-gap]>temp ; j=j - gap)
      {
        A[j] = A[j-gap] ;
      }
      A[j] = temp ;
      //for(int k=0 ; k<n ; k++)
      //cout<<A[k]<<" "  ;
      //cout<<"  | GAP = "<<gap<<" | Swapped "<<A[i]<<"<->"<<temp<<" | i= "<<i  ;
      //cout<<endl ;
    }
    for(int k=0 ; k<n ; k++)
      cout<<A[k]<<" "  ;
    gap = gap/2 ;
    cout<<endl ;
  }
 }
int main()
{
	int n , k ;
  	cin>>n ;
  	int A[n] ;
   	for(k=0 ; k<n ; k++)
      cin>>A[k] ;
  	shellsort(A,n) ;
	return 0;
}


/* 
1 8 3 4 2 | GAP = 2 | Swapped 3<->1 | i= 2
1 4 3 8 2 | GAP = 2 | Swapped 8<->4 | i= 3
1 4 2 8 3 | GAP = 2 | Swapped 3<->2 | i= 4

1 4 2 8 3 | GAP = 1 | Swapped 4<->4 | i= 1
1 2 4 8 3 | GAP = 1 | Swapped 4<->2 | i= 2			//Basic insertion sort
1 2 4 8 3 | GAP = 1 | Swapped 8<->8 | i= 3
1 2 3 4 8 | GAP = 1 | Swapped 8<->3 | i= 4
*/