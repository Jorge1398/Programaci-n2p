using namespace std;
#include<iostream>
#include<stdlib.h>

void llenarUno(int vector[],int n);
void ponerCeros(int vector[], int n);
void mostrar(int vector[], int n);

int main()
{
	int vector[1000];
    llenarUno(vector,1000);
    ponerCeros(vector,1000);
    mostrar(vector,1000);
    cin.get();
    cin.get();
    return 0;
	
}

void llenarUno(int vector[],int n)
{
	for(int i=2;i<1000;i++)
	  vector[i]=1;
}

void mostrar(int vector[], int n)
{
	for(int i=0; i<1000;i++)
	{
		if(vector[i]==1)
		cout<<i<<endl;
	}
}

void ponerCeros(int vector[], int n)
{
	for(int i=2; i<1000; i++)
	{
		if(vector[i]==1)
		{
            for(int j=i+1;j<1000;j++)
            {
                if(j%i==0)
					 vector[j]=0;
			}
		}
	}
}
