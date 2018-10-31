//USING COMPARATOR , FOR SORTING BIG NUMBERS OUT OF INTEGER RANGE


#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool mycompare(string s1,string s2)
{
    int n=s1.length() ;
    int m=s2.length() ;
    if(n==m)
        return s1<s2 ;
    return n<m ;
}


int main() {
    int n , i , j ;
    cin>>n ;
    vector<string> s(n) ;
    for(i=0 ; i<n ; i++)
    {
        cin>>s[i] ;
    }
    sort(s.begin(),s.end(),mycompare) ;
    for(i=0 ; i<n ; i++)
    {
        cout<<s[i]<<endl ;
    }
    return 0;
}
