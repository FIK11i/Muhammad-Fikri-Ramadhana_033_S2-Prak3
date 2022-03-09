#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main (void)
{
	char a[100];
	
	cout<<"=========================================="<<endl;
	cout<<" Masukkan Karakter : "; cin.getline(a,100);
	cout<<"\n";
	
	strlwr(a);
	cout<<" Tampilan Karakter huruf kecil : "<<a<<endl;
	cout<<"\n";
	
	strupr(a);
	cout<<" Tampilan Karakter huruf besar : "<<a<<endl;
	cout<<"\n";
	
	system ("PAUSE");
	return 0;
	
}
