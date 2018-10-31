//Divide and conquer min and max

#include <iostream>
//#include <algorithm>
using namespace std;

struct minmax{
  int minval ;
  int maxval ;
};

minmax findans(int A[] , int lower , int upper)
{
  minmax result ;
  if(lower==upper)
  { result.minval = A[lower] ;
  	result.maxval = A[upper] ;
  }
  else if(upper==lower+1)
  {
    result.minval = min(A[lower],A[upper]) ;
    result.maxval = max(A[lower],A[upper]) ;
  }
  else 
  {
    int mid = (lower + upper)/2 ;
    minmax result1 = findans(A,lower,mid) ;
    minmax result2 = findans(A,mid+1,upper) ;
    result.minval = min(result1.minval , result2.minval) ;	
    //out<< min(result1.minval , result2.minval)<<endl ;
    result.maxval = max(result1.maxval , result2.maxval) ;
    //cout<< min(result1.maxval , result2.maxval) <<endl ;
  }
  return result ;
}

int main()
{
	int n ;
  	cin>> n;
  	int *A ;
  	A = new int[n] ;
  	for(int i=0 ; i<n ; i++)
      cin>>A[i] ;
  	minmax ans = findans(A,0,n-1) ;
  	cout<<"Minimum element is "<<ans.minval<<endl;
  	cout<<"Maximum element is "<<ans.maxval<<endl; 
	return 0;
}