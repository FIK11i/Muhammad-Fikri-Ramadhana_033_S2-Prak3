#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int jumlah(const char*a)
{
	int b=0;
	for(;*a!='\0';a++)
	++b;
	return b;
}

int main (void)
{
	char A[100];
	cout<<"\n";
	cout<<" Tuliskan kata : "; cin.getline(A,100);cout<<endl;
	cout<<" Jumlah karakter : "<<jumlah(A)<<endl;
	cout<<"\n";
	
	system ("PAUSE");
	return 0;
	
}
