#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vec1 , vec2 ;
    int s , n , m , i  , x , max=-1;
    cin>>s>>n>>m ;
    for(i=0 ; i<n ; i++)
    {   cin>>x ;
        vec1.push_back(x);
    }
    for(i=0 ; i<m ; i++)
    {   cin>>x ;
        vec2.push_back(x);
    }
    vector<int>::iterator it1,it2,it3,it4 ;
    it1=vec1.begin();it2=vec1.end();it3=vec2.begin();it4=vec2.end();
    sort(it1,it2);sort(it3,it4) ;
    //for(it1=vec1.begin() ; it1!=vec1.end() ; it1++)
     //   cout<<*it1<<" " ;
    for(it1=vec1.begin() ; it1!=vec1.end() ; it1++)
    {
        for(it3=vec2.begin();it3!=vec2.end();it3++)
        {
            if((*it1 + *it3)>s)
                break ;
            if((*it1 + *it3)>max)
                max = *it1 + *it3 ;
        }
    }
    cout<<max ;
    return 0;
}
