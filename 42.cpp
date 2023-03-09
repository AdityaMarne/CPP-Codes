#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	//Pattern 1.
	cout<<"Pattern 1 :"<<endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n+1-i; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	//Pattern 2.
	cout<<"Pattern 2 :"<<endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++)
		{
			if((i+j) % 2 == 0)
			{
				cout<<" 1";
			}else{
				cout<<" 0";
			}
		}
		cout<<endl;
	}
	
	cout<<endl;
	//Pattern 3.
	cout<<"Rombus :"<<endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout<<" ";
		}
		for(int j=1; j<=n; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl;
	//Pattern 4.
	cout<<"Patter 4 :"<<endl;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout<<" ";
		}
		for(int j=1; j<=i; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	//Palindrome pattern
	cout<<"Palindrome :"<<endl;
	for(int i=1; i<=n; i++){
		int j;
		for(j=1; j<=n-i; j++){
			cout<<" ";
		}
		int k=i;
		for(; j<=n; j++){
			cout<<k--;
		}
		k = 2;
		for( ;j <= n+i-1; j++){
			cout<<k++;
		}
		cout<<endl;
	}
	
	cout<<endl;
	//Pattern 5
	cout<<"Pattern 4:"<<endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++){
			cout<<" ";
		}
		for(int j=1; j <= 2*i-1; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i=n; i>=1; i--){
		for(int j=1; j<=n-i; j++){
			cout<<" ";
		}
		for(int j=1; j <= 2*i-1; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl;
	//Zig-Zag pattern
	cout<<"Zig-Zag pattern:"<<endl;
	for(int i=1; i<=3; i++){
		for(int j=1; j<=n; j++){
			if( ((i+j)%4==0) || (i == 2 && j % 4 == 0))
			{
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	} 
	return 0;
}
