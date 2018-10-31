#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n , m,  total=0 , i , j , k;
    cin>>n>>m ;
    int A[n][n] , B[n][n] ;
    for( i=0 ; i<n ; i++)
    {
        for(j=0; j<n ; j++)
            cin>>A[i][j] ;
    }
    //MAIN PART
    for(k=0 ; k<4 ; k++)                        //LOOP TO CALCULATE FROM ONE SIDE
    {
        for(i=0 ; i<n ; i++)
        {
        total = total + A[i][0] ;
        for(j=0 ; j<(n-1) ; j++)
        {
            if(A[i][j]<A[i][j+1])
            {
                total = total + (A[i][j+1] - A[i][j]) ;
            }
        }
        }
    //cout<<"\nTotal of side"<<k+1<<" = "<<total<<endl ;
    //CODE FOR ROTATING THE ARRAY 90 Degree (attached on notepad file)
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
            B[i][j] = A[n-1-j][i] ;
    }
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
            A[i][j] = B[i][j] ;
    }
   /* cout<<"/n After "<<k+1<<" Rotation :\n" ;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
            cout<<A[i][j]<<" " ;
        cout<<endl ;
    }
    */

    }
cout<<total + 2*n*n  ;
}
