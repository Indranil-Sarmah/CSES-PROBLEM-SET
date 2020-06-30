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

     string str;
     ll cur_count=1,count=0;
     getline(cin,str);

     ll n=str.length();



     for(ll i =0;i<n;i++)
     {
         if(i<n-1 && str[i]==str[i+1])
         {
             cur_count++;
         }
         else
         {
             if(cur_count>count)
             {
                 count=cur_count;
             }
             cur_count=1;
         }
     }

     cout<<count;

     return 0;
}
