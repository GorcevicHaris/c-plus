#include <iostream>
using namespace std;

// int main()
// {
//     int a, b;

//     cout << "Unesite prvi broj: ";
//     cin >> a;

//     cout << "Unesite drugi broj: ";
//     cin >> b;

//     int suma = a + b;
//     int razlika = a - b;
//     int proizvod = a * b;
//     int kolicnik = a / b;
//     int ostatak = a % b;

//     cout << "Suma: " << suma << endl;
//     cout << "Razlika: " << razlika << endl;
//     cout << "Proizvod: " << proizvod << endl;
//     cout << "Kolicnik: " << kolicnik << endl;
//     cout << "Ostatak: " << ostatak << endl;

//     return 0;
// }
//=====================================================================
// #include <iostream>
// using namespace std;
// int Suma(int a, int b)
// {
//     return a + b;
// }
// int main()
// {
//     int a, b;

//     cout << "Unesite prvi broj";
//     cin >> a;
//     cout << "Unesite drugi broj";
//     cin >> b;
//     int suma = 0;
//     int proizvod = a * b;
//     int kolicnik = a / b;
//     int ostatak = a % b;
//     int suma = Suma(a, b);
//     cout << "Suma: " << suma << endl;
//     cout << "proizvod: " << proizvod << endl;
//     cout << "Kolicnik: " << kolicnik << endl;
//     cout << "Ostatak: " << ostatak << endl;

//     return 0;
// }
//====================================================================
// 6 zadatak
// int main()
// {
//     int a, b;
//      cout << " Unesi prvi broj: " << endl;
//     cin >> a;
//     cout << " Unesi drugi broj: " << endl;
//     cin >> b;

//     if (a > b)
//     {
//         cout << " broj " << a << " je veci od " << b << "." << endl;
//     }
//     else if (a < b)
//     {
//         cout << " broj " << b << " je veci od " << a << "." << endl;
//     }
//     else
//     {
//         cout << " brojevi " << a << " i " << b << " su jednaki " << endl;
//     }
//     return 0;
// }
//====================================================================
// 7 zadatak
// int main()
// {
//     int a, b, c, max;
//     cout << " 3 broja ";
//     cin >> a >> b >> c;

//     if (a < c && b < c)
//     {
//         max = c;
//     }
//     else if (b < a && c < a)
//     {
//         max = a;
//     }
//     else
//     {
//         max = b;
//     }
//     cout << " najveci broj je " << max << endl;
//     return 0;
// }
//====================================================================
// // 9 zadatak
// int main()
// {
//     int suma = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         suma += i;
//     };
//     cout << " Suma je: " << suma;
// }
//====================================================================
// // 11 zadatak
// int main()
// {
//     int suma = 0;
//     int i = 1;
//     do
//     {
//         suma += i;
//         i++;
//     } while (i < 10);
//     cout << " suma je : " << suma << endl;
// }
//====================================================================
// 13 zadatak
// int main()
// {
//     int dg, gg, suma = 0, brojac = 0;

//     // Unos granica intervala
//     cout << "Unesite donju granicu intervala: ";
//     cin >> dg;
//     cout << "Unesite gornju granicu intervala: ";
//     cin >> gg;

//     // Prolazak kroz interval i obrada neparnih brojeva
//     for (int i = dg; i <= gg; i++)
//     {
//         if (i % 2 != 0)
//         {              // Provera da li je broj neparan
//             suma += i; // Sabiranje neparnih brojeva
//             brojac++;  // Brojanje neparnih brojeva
//         }
//     }

//     // Provera da li ima neparnih brojeva u intervalu
//     if (brojac > 0)
//     {
//         double srednja_vrednost = (double)suma / brojac;
//         cout << "Srednja vrednost neparnih brojeva u intervalu je: " << srednja_vrednost << endl;
//     }
//     else
//     {
//         cout << "U zadatom intervalu nema neparnih brojeva." << endl;
//     }

//     return 0;
// }
//====================================================================
int main()
{
    int a, b;
    cout << "Unesite donju granicu (dvocifren broj): ";
    cin >> a;
    cout << "Unesite gornju granicu (dvocifren broj): ";
    cin >> b;

    if (a < 10 || a > 99 || b < 10 || b > 99 || a > b)
    {
        cout << " unesite ispravne brojeve ";
        return 1;
    }
    cout << " ovo su brojevi deljivi sa 3 " << endl;

    for (int i = a; i <= b; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}