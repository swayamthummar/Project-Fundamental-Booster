#include<iostream>
using namespace std;
main()
{
	char ch[100];
	cout<<"Enter any value->";
	cin>>ch;
	for(int i=0;ch[i]!=NULL;i++)
	{
		if(ch[i]>='A' && ch[i]<='Z')
		{
			ch[i]=ch[i]+32;
	    }
	    else if(ch[i]>='a' && ch[i]<='z')
	    {
	    	ch[i]=ch[i]-32;
		}
	}
	cout<<"The togglecase string is->"<<ch;
}
