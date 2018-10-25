#include <iostream>

using namespace std;

void llenarVector(int v[], int tam);
void imprimirVector(int v[],int tam);
int esMultiplo(int n1, int n2);
void vecPrimo(int v[],int tam);


int main ()
{
    int v[1000];
    llenarVector(v,1000);
    vecPrimo(v,1000);
    imprimirVector(v,1000);


    return 0;
}
void llenarVector(int v[], int tam)
{
    for (int i=0; i<tam; i++)
        v[i] = 1;
}
int esMultiplo(int n1, int n2)
{
    if (n1 % n2 == 0)
        return 1;
    else
        return 0;
}
void vecPrimo(int v[],int tam)
{
    for (int i=2; i<tam; i++)
    {
        if (v[i]==1)
            for (int j=i+1; j<tam; j++)
            {
                if (esMultiplo(j,i) == 1)
                {
                    v[j]=0;
                }
            }
    }
}
void imprimirVector(int v[],int tam)
{
    for (int i=2; i<tam; i++)
        if (v[i] == 1)
            cout << i << endl;
}
