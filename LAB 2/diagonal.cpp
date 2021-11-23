
#include<iostream>
using namespace std;
int main()
{
     int a[10][10],ld, rd, s1, s2,row,column;
     cout << "Enter rows and columns of matrix: ";
   cin >> row >> column;

   cout << "\nEnter elements of matrix: " << endl;

   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << "Enter element a" << i + 1 << j + 1 << ": ";
         cin >> a[i][j];
         if(i==j)
         s1=s1+a[i][j];
         else if ((i+j)==(row-1))
         s2=s2+a[i][j];
      }}
      for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
            cout<<a[i][j]<<" ";
      }
      cout<<endl;}
      if(s1<s2)
       cout<<"left diagonal's sum is less than right diagonal"<<endl;
       else if(s1==s2)
       cout<<"left diagonal's sum is equal to right diagonal's sum"<<endl;
       else
       cout<<"left diagonal's sum is greater than right diagonal's sum"<<endl;


    return 0;

}
