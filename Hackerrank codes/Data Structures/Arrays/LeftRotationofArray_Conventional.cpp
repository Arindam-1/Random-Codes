//Left Rotation of Array d times using conventional method

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 vector<int> leftrot(vector<int>& arr , int d , int n)
 {
     if(d>=1)
          return leftrot(arr ,  d-1 ,  n) ;
     else 
     {   int temp , i ;
         temp = arr[0] ;
         for(i=0 ; i<(n-1) ; i++)
             arr[i] = arr[i+1] ;
         arr[n-1] = temp ;
         return arr ;
     }
 }

int main() {
    int d , n ;
    cin>> n>>d ;
    vector <int> A(n) ;
    for(int i=0 ; i<n ; i++)
        cin>>A[i] ;
    leftrot(A,d,n);
    for(int i=0 ; i<n ; i++)
        cout<<A[i]<<" " ;
    return 0;
}
