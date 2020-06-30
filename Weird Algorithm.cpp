/* ************ PROGRAM BY INDRANIL SARMAH ********************* */
#include<iostream>
#include <bits/stdc++.h>
#define ll long long int
#define li long int
#define llu long long unsigned int
using namespace std;


int main()
{

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);cout.tie(NULL);

     ll n;

     cin>>n;

     cout<<n<<" ";
     while(n!=1)
     {
         if(n%2==0)
         {
             n=n/2;
             cout<<n<<" ";
         }
         else
         {
             n=n*3+1;
             cout<<n<<" ";
         }
     }

     return 0;
}
