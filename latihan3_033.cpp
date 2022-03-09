#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(void)
{
	int a,i;
	double *data;
	
	printf(" Masukkan Jumlah Data : "); 
	scanf("%d", &a);
	
	data=(double *)calloc(a, sizeof(double));
	
	for (i=0;i<a;i++)
	{
		printf(" Data nilai ke-%d: ", i+1);
		scanf("%lf", data+i);
	}
	
	for (i=0;i<a;i++)
	{
		if (*data<*(data+i))
		{
			*data=*(data+i);
		}
	}
	
	printf("Nilai Maksimum : %.2lf", *data);
	
	
}
