#include <iostream>
using namespace std;
int main()
{
	int n, choice;
	cout<<"Enter Your Choice:\n1 Triangle 1\n2 Triangle 2\n3 Triangle 3\n4 Triangle 4\n5 Triangle 5\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
		/* *
		   * *
		   * * *
		   * * * *
		   * * * * *
		*/
		cout<<"Enter Value of N ";
		cin>>n;
		for (int i = 1; i<=n; i++)
		{
			for(int j = 1; j<=i ; j++)
				cout<<"*";
			cout<<endl;
		}
		break;


		case 2:
		/*    *
		     **
		    ***
		   ****
		  *****
		*/
		cout<<"Enter Value of N ";
		cin>>n;
		for (int i = 1; i<=n; i++)
		{
			for(int j = 1; j<=(n-i) ; j++)
				cout<<" ";
			for(int j = 1; j<=i ; j++)
				cout<<"*";
			cout<<endl;
		}
		break;

		case 3:

		break;

		case 4:

		break;

		case 5:

		break;

	}
	return 0;
}
