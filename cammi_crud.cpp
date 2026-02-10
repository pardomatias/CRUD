#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void add(int x[],int d)
{
	for(int i=0;i<d;i++)
	{
		cin>>x[i];
	}
}


void stampa(int x[],int d)
{
	for(int i = 0; i < d; i++)
	{
		cout<<x[i];
	}
}


void ricerca(int x[],int d,int n)
{
	for(int i = 0;i<d;i++)
	{
		if(n==x[i])
		cout<<"elemento trovato nella posizione "<<i+1<<endl;
	}
}


int main(int argc, char** argv) {
	int x[15],d = 20;
	

	
	return 0;
}