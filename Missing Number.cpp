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

     ll n,x;
     ll sum1=0;
     ll sum2=0;

     cin>>n;

     sum2=((n)*(n+1))/2;

     n=n-1;

     while(n)
     {
         cin>>x;
         sum1=sum1+x;
         n--;
     }

     cout<<sum2-sum1;




     return 0;
}
