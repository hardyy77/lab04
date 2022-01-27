
#include <iostream>
#include <math.h>
using namespace std;
//zad 1
float kolo(float pi, int r);
float prostokat(int a, int b);
float trojkat(float a, float h);
float polszescian(float a, float h);
float objszescian(float a, float h);
float walec(float pi, float r, float h);
//zad2
bool liczbaPierwsza(int n);
//zad3
void dec_to_bin(int liczba);



int main()
{
    //zad 1
    cout << "pole kola " << kolo(3.14, 2) << endl;
    cout << "pole prostokatu " << prostokat(4, 5) << endl;
    cout << "pole trojkata " << trojkat(6, 5) << endl;
    cout << "pole szescianu " << polszescian(12, 4)<< endl;
    cout << "objetosc szescianu " << objszescian(4, 9) << endl;
    cout << "objetosc walca " << walec(3.14, 7, 3) << endl;

    //zad 2
    int n;

    cout << "Podaj liczbę: ";
    cin >> n;

    if (liczbaPierwsza(n))
        cout << "Liczba " << n << " jest pierwsza" << endl;
    else
        cout << "Liczba " << n << " nie jest pierwsza" << endl;

    //zad 3
    int liczba;

    cout << "Podaj liczbę: ";
    cin >> liczba;

    cout << liczba << " po zamianie na postać binarną: ";
    dec_to_bin(liczba);
    cout << endl;
    
}


//zad 1
float kolo(float pi, int r)
{
    return pi * r * r;
}
float prostokat(int a, int b)
{
    return a * b;
}
float trojkat(float a, float h)
{
    return (a * h) / 2;
}
float polszescian(float a, float h)
{
    return 6 * a * a;
}
float objszescian(float a, float h)
{
    return a * a * h;
}
float walec(float pi, float r, float h)
{
    return pi * r * r * h;
}

//zad 2
bool liczbaPierwsza(int n)
{
    if (n < 2)
        return false; 

    for (int i = 2;i * i <= n;i++)
        if (n % i == 0)
            return false; 
    return true;
}
//zad 3
void dec_to_bin(int liczba)
{
    int i = 0, tab[31];

    while (liczba) 
    {
        tab[i++] = liczba % 2;
        liczba /= 2;
    }

    for (int j = i - 1;j >= 0;j--)
        cout << tab[j];
}