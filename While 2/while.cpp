#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	int i = 1;
	srand(time(0));
	while (i < 7)
	{
		
		cout << "LotterNo"" " << i<<" ""Is:";
		cout <<  rand() % (49) + 1;
		cout << "\n";
		
		i++;
	}
	system("pause");
	return 0;
}