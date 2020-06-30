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

     ll n,turn=0;
     cin>>n;

     ll a[n];

     for(ll i=0;i<n;i++)
     {
         cin>>a[i];
     }

     ll i=0;
     while(i<n-1)
     {
         if(a[i]>a[i+1])
         {
             turn=turn+(a[i]-a[i+1]);
             a[i+1]=a[i];
         }
         i++;
     }
     cout<<turn;




     return 0;
}
