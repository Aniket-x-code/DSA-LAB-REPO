#include<iostream>
using namespace std;
int main()
{
int r,c;
cout<<"enter row and column"<<endl;
cin>>r>>c;
int arr[r][c];
cout<<"enter value in matrix"<<endl;
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
        cin >> arr[i][j];
    }
}
int max=arr[0][0];
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
    if(arr[i][j]>max)
    max=arr[i][j];
}
}
cout<<"matrix"<<endl;
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
        cout<< arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"max element:"<<max<<endl;
return 0;
}
