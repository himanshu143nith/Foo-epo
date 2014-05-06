#include<iostream>
using namespace std;

int main()
{
	cout << "We are the foo fighters";
	cout << "\nAre you ? (y/n)";
	char choice;
	cin >> choice;
	if(choice == 'N' || 'n')
	{
		cout <<"good bye and have a nice day";
		break;
	}
	else
	{
		cout <<< "Welcome to the world";
	}
return 0;
}
