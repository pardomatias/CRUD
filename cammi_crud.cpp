#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void add(int x[],int d)
{
	for(int i=0;i<d;i++)
	{
		cout<<"inserisci un numero"<<endl;
		cin>>x[i];
	}
}


void stampa(int x[],int d)
{
	for(int i = 0; i < d; i++)
	{
		cout<<x[i]<<endl;
	}
}


void ricerca(int x[],int d,int n)
{
	int l=0;
	for(int i = 0;i<d;i++)
	{
		if(n==x[i])
		{
			cout<<"elemento trovato nella posizione "<<i+1<<endl;
			l++;
		}
	}
	if(l==0)
	cout<<0;
}


void modifica(int x[],int &d,int n)
{
	for(int i=n-2;i<d-1;i++)
	{
		x[i]=x[i+1];
	}
	d--;
	stampa(x,d);
}



int main(int argc, char** argv) {
	int x[15],d = 15,n=0;
	add(x,d);
	stampa(x,d);
	cout<<"inserisci il numero da cercare ";
	cin>>n;
	ricerca(x,d,n);
	cout<<"inserisci la posizione che vuoi cancellare ";
	cin>>n;
	modifica(x,d,n);
	
	

	
	return 0;
}
