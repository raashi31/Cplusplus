#include<iostream>
#include<conio.h>

using namespace std;

int main()
{int a[10][10],b[10][10],i,j,m,n,c[10][10];
 cout<<"How many rows and columns?";
 cin>>m>>n;
 
 cout<<"Enter elements of first matrix";
 for(i=0;i<m;i++)
 {for(j=0;j<n;j++)
   cin>>a[i][j];
 }
 
 cout<<"Enter elements of second matrix";
 for(i=0;i<m;i++)
 {for(j=0;j<n;j++)
   cin>>b[i][j];
 }
 
 //addition
 for(i=0;i<m;i++)
 {for(j=0;j<n;j++)
   c[i][j]=a[i][j]+b[i][j];
 }
 
 return 0;
 }
