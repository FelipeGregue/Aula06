#include <iostream>

using namespace std;

int main(void)
{
    int i;
    char letra;

    for(i=48; i<=57; i++)
    {
        letra = i;
        cout << "O numero " << letra << " tem o valor inteiro ASCII: " << int(letra) << endl;
    }

    return 0;
}