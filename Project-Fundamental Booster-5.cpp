#include<iostream>
using namespace std;
main()
{
	int n[100],arr[100],size;
	cout<<"enter the size->";
	cin>>size;
	cout<<"enter the numbers";
	for(int i=0;i<size;i++)
	{
		cin>>n[i];
		arr[i]=n[i]*n[i]*n[i];
	}
	for(int i=0;n[i]<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
