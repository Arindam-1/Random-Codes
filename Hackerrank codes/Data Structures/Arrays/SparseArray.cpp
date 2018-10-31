#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//Sparse Array 
/*
Sample Input

4
aba
baba
aba
xzxb
3
aba
xzxb
ab
Sample Output

2
1
0
*/

#include <string>
using namespace std;


int main() {
    int n , q; 
    cin>> n ;
    vector<string> v1(n) ;
    for(int i=0  ;i<n ; i++)
        cin>>v1[i];
    cin>>q ;
    vector<string> v2(q) ;
    vector<int> count(q) ;
    for(int i=0  ;i<q ; i++)
        cin>>v2[i];
    for(int j=0 ; j<q  ;j++)
    {
        for(int i=0 ; i<n ; i++)
        {
             if(v2[j].compare(v1[i])==0)
                    count[j]++ ;
        }
    }
    for(int i=0  ;i<q ; i++)
       cout<<count[i]<<endl;
}
