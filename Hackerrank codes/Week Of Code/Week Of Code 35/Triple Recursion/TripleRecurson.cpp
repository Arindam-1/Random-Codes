#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int fillbleh(int n,int i,int j,int m,int k)
{
    int A[n][n] ;
    if((i==0)&&(j==0))
        A[i][j]=m ;
    else if(i==j)
        A[i][j] = fillbleh(n,i-1,j-1,m,k) + k ;
    else if(i>j)
        A[i][j] = fillbleh(n,i-1,j,m,k) - 1 ;
    else
        A[i][j] = fillbleh(n,i,j-1,m,k) - 1 ;
    return A[i][j] ;
}
int main()
{
    int n , i , j , m , k ;
    cin>>n>>m>>k ;
    int A[n][n] ;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
            A[i][j] = fillbleh(n,i,j,m,k) ;
    }
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
            cout<<A[i][j]<<" " ;
        cout<<endl ;
    }
    return 0 ;
}
