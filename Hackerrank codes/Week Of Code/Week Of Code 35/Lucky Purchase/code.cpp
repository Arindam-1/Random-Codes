//Week Of Code 35 : Lucky Purchase

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findbleh(int a)
{
    int count=0 ,count4=0,count7=0 ;
    while(a!=0)
    {
        int num ;
        num = a%10 ;
        if(num==4)
            count4++ ;
        if(num==7)
            count7++ ;
        a = a/10 ;
        count++ ;
    }
    if((count4==count7)&&(count4!=0))
        return count ;
    else
        return -1 ;
}
int main() {
    int n , minim = -1 , loc = -1  ;
    cin>>n ;
    vector<int> A(n) ;
    vector<string> B(n) ;
    for(int i=0; i<n ; i++)
    {
        cin>>B[i]>>A[i] ;
    }
    for(int i=0 ; i<n ; i++)
    {
        if(findbleh(A[i])!=-1)
        {  minim = A[i] ;
           loc = i ;
            break ;
        }
    }
for(int i=0 ; i<n ; i++)
    {
        int ans = findbleh(A[i]) ;
        if(ans!=-1)
        {
            if(ans<minim)
            {
                minim = ans ;
                loc = i ;
            }
            else if(ans==minim)
            {
                minim = min(ans,minim) ;
            }
        }
        
        
    }
    if(minim!=-1)
        cout<<B[loc] ;
    else 
        cout<<-1 ;
    return 0;
}
