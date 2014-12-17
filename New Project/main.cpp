#include <iostream>
using namespace std;
void counter(int num);
void again(char a);

int main() 
{
	int n;
	char a;
	cout << "This is a counter!!" <<endl;
	cout << "Enter a number " ;
	cin >> n;
	counter(n);
	
	again(a);

	return 0;
}

void counter(int num)
{
	for (int i = 1; i <= num; i++)
	{
		cout << i <<endl;
 	}
}
void again(char a)
{
    	cout << "would you like to enter another?" ;
	cin >> a;
	if (a == 'y')
		cout << "Enter another number " ;
		cin >> n;
		counter(n);
}
