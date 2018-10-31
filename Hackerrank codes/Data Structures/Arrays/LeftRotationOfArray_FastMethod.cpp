//Left Rotation Of Array d times Using a fast method

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 void leftrot(vector<int>& arr , int d , int n)
 {
    vector<int> arr1(n) ;
    for(int i=0 ; i<n ; i++)
    {
        int newloc ;
        newloc =(i + (n-d))%n ;			//This calculates the index after d rotations , n is the size of the array
        arr1[newloc]=arr[i] ; 
    }
    for(int i=0 ; i<n ; i++)
        cout<<arr1[i]<<" " ;
 }

int main() {
    int d , n ;
    cin>> n>>d ;
    vector <int> A(n) ;
    for(int i=0 ; i<n ; i++)
        cin>>A[i] ;
    leftrot(A,d,n);
    return 0;
}
