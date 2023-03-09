#include<iostream>
using namespace std;

int main()
{
	int row,col,n;
	
	cin>>row>>col;
	
	//Rectangle pattern
	cout<<"Rectangle pattern :"<<endl;
	for(int i=1; i<=row; i++)
	{
		for(int j=1; j<=col; j++)
		{
			cout<<"*"<<"\t";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	//Hollow pattern
	cout<<"Hollow pattern :"<<endl;;
	for(int i=1; i<=row; i++)
	{
		for(int j=1; j<=col; j++)
		{
			if(i == 1 || i == row || j == 1 || j == col)
			{
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	} 
	
	//Inverted Half Pyramid.
	cout<<"Inverted Half Pyramid :"<<endl;
	cin>>n;
	
	for(int i=n; i>=1; i--)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	//Half pyramid after 180 rotation.
	cout<<"Half pyramid after 180 rotation :";
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(j <= n-1)
			{
				cout<<"";
			}else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	
	//Floyd's Traingle
	cout<<"Floyd Traingle :";
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; i++)
		{
			int count = 1;
			cout<<count<<"";
			count++;
		}
		cout<<endl;
	}
	
	//Butterfly Pattern
	cout<<"Butterfly Pattern :";
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<"*";
		}
		int space = 2*n - 2*i;
		for(int j=1; j<=space; j++)
		{
			cout<<"";
		}
		for(int j=1; j<=i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n; i>=1; i--)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<"*";
		}
		int space = 2*n - 2*i;
		for(int j=1; j<=space; j++)
		{
			cout<<"";
		}
		for(int j=1; j<=i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
