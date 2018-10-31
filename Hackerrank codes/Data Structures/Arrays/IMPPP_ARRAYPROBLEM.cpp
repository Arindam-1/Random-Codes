#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    vector<int> S(16) ;
    int i , j , k ;
    for(i=0 ; i<16 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            for(k=0 ; k<3 ; k++)
                S[i] = S[i] + arr[j + (i/4)][k + (i%4)] ; 
        }
      S[i] = S[i] - arr[(i/4) + 1][(i%4) + 0] - arr[(i/4) + 1][(i%4) + 2] ;
    }
    vector<int>::iterator it1= max_element(S.begin(),S.end()) ;
    cout<<*it1 ;
    return 0;
}