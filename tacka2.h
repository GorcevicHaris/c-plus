// class Tacka
// {
//     double x, y; // Koordinate.
// public:
//     void postavi(double a, double b) // Postavljanje koordinata.
//     {
//         x = a;
//         y = b;
//     }
//     double aps() const { return x; } // Apscisa.
//     double ord() const { return y; } // Ordinata.
//     double rastojanje(Tacka) const;  // Rastojanje do tacke.
//     friend Tacka citaj();            // Citanje tacke.
//     friend void pisi(Tacka);         // Pisanje tacke.
// };
/////////////////////////////////////////////////////////////////////////////////////////////////
#include <cstdlib>
#include <iostream>
using namespace std;
class Trougao
{
    double a, b, c; // Stranice trougla.
public:
    void postavi(double a1, double b1, double c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }
};