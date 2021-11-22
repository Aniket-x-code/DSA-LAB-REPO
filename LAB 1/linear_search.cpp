#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n;
    int flag=0, i;
    cout<<"enter no. to be searched"<<endl;
    cin>>n;
    for(i=0;i<10;i++)
    {
        if(a[i]==n)
        {
        flag=1;
        break;

        }

    }
    if(flag)
        cout<< "element present at pos:"<<i+1<<endl;
            else
            cout<<"not found"<<endl;

    return 0;

}
