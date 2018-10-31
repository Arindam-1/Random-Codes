//USED MAPS and ITERATORS (MAPS STORE VALUES ALPHABETICALLY ON ORDER OF KEYS)

#include <iostream>
#include <map>
#include<cstring>
#include <iterator>
using namespace std;
int main()
{
	map<string,int> studlist ;
  	int n ;
  	cin>>n ;
  	//map<string,int>::iterator it=studlist.begin() ;
  	while(n!=0)
    {
      string name ;
      int marks ;
      cin>>name>>marks ;
      studlist.insert(pair<string,int>(name,marks)) ;
      n-- ;
    }
  	map<string,int>::iterator it=studlist.begin() ;
  	cout<<"After sorting"<<endl ;
  	cout<<"Name"<<" "<<"ID"<<endl ;
  	for(it=studlist.begin() ; it!=studlist.end() ; it++)
  		cout<<it->first<<" "<<it->second<<endl ;
	return 0;
}