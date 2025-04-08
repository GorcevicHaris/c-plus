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
// 15 zadatak
// int main()
// {
//     int a, b;
//     cout << "Unesite donju granicu (dvocifren broj): ";
//     cin >> a;
//     cout << "Unesite gornju granicu (dvocifren broj): ";
//     cin >> b;

//     if (a < 10 || a > 99 || b < 10 || b > 99 || a > b)
//     {
//         cout << " unesite ispravne brojeve ";
//         return 1;
//     }
//     cout << " ovo su brojevi deljivi sa 3 " << endl;

//     for (int i = a; i <= b; i++)
//     {
//         if (i % 3 == 0)
//         {
//             cout << i << endl;
//         }
//     }
//     return 0;
// }
//====================================================================
// // 16 zadatak
// int main()
// {
//     int a, b;
//     int suma = 0;
//     cout << " unesi pocetak i kraj " << endl;
//     cin >> a >> b;

//     for (int i = a; i < b; i++)
//     {
//         if (i % 2 == 0)
//         {
//             suma += i;
//         }
//     }
//     cout << " suma je : " << suma << endl;
// }
//====================================================================
// 17 zadatak

// int main()
// {
//     int a, b, broj;
//     cout << " unesi pocetak i kraj " << endl;
//     cin >> a >> b;
//     cout << " unesi broj  " << endl;
//     cin >> broj;
//     cout << " ovo su brojevi koji su deljivi sa datim brojem " << endl;
//     for (int i = a; i < b; i++)
//     {
//         if (i % broj == 0)
//         {
//             cout << i << endl;
//         }
//     }
// }
//====================================================================

// int faktorijel(int a, int &b)
// {
//     for (int i = 1; i <= a; i++)
//     {
//         b *= i;
//     }
// }
// int main()
// {
//     int a, b = 1;
//     cout << " unesi broj " << endl;
//     cin >> a;
//     faktorijel(a, b);
//     cout
//         << " ovo je faktorijel " << b << endl;
//     return 0;
// }
//===============================================================
// int faktorijel(int x)
// {
//     int i;
//     int f = 1;
//     for (i = x; i > 1; i--)
//     {
//         f = f * i;
//     }
//     return f;
// }
// int main(void)
// {
//     int x;
//     double c;
//     int izraz;
//     cout << "Unesite broj: " << endl;
//     cin >> x;
//     izraz = faktorijel(x) + faktorijel(x + 2) - faktorijel(2 * x);
//     printf("Vrednost izraza je %d\n", izraz);
//     return 0;
// }
//===============================================================
// // 22 zadatak
// void zamena_mesta(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     int x = 5, y = 10;

//     cout << "Pre zamene: x = " << x << ", y = " << y << endl;

//     zamena_mesta(x, y);

//     cout << "Nakon zamene: x = " << x << ", y = " << y << endl;

//     return 0;
// }
//====================================================================
// void unos_brojeva(int &a, int &n)
// {
//     cout << "Unesite broj a: ";
//     cin >> a;
//     cout << "Unesite broj n: ";
//     cin >> n;
// }

// // Funkcija za računanje stepena
// int stepen(int a, int n)
// {
//     return pow(a, n);
// }

// int main()
// {
//     int a, n;

//     unos_brojeva(a, n);

//     int rezultat1 = stepen(a, n);
//     int rezultat2 = rezultat1 + stepen(a, n + 1);

//     cout << "Vrednost an: " << rezultat1 << endl;
//     cout << "Vrednost an + an+1: " << rezultat2 << endl;

//     return 0;
// }
//====================================================================
// bool imaCifruJedinica9(int broj)
// {
//     return abs(broj) % 10 == 9;
// }

// int zbirBrojevaSaCifrom9(int a, int b)
// {
//     int zbir = 0;
//     for (int i = a; i <= b; i++)
//     {
//         if (imaCifruJedinica9(i))
//         {
//             zbir += i;
//         }
//     }
//     return zbir;
// }

// int main()
// {
//     int a, b;
//     cout << "Unesite granice intervala [a, b]: ";
//     cin >> a >> b;

//     int rezultat = zbirBrojevaSaCifrom9(a, b);
//     cout << "Zbir brojeva u intervalu [" << a << ", " << b << "] sa cifrom jedinice 9 je: " << rezultat << endl;

//     return 0;
// }
//====================================================================
//
// int main()
// {
//     int a;
//     cout << "Unesi broj: ";
//     cin >> a;

//     int poslednjaCifra = a % 10; // Uzima poslednju cifru broja
//     a = a / 10;
//     cout << "ovo je a : " << a << "ovo je poslednja cifr :" << poslednjaCifra;
//     // Petlja koja proverava cifre broja
//     while (a > 0)
//     {
//         int trenutaCifra = a % 10; // Uzima sledeću cifru
//         if (trenutaCifra > poslednjaCifra)
//         {
//             cout << "Cifre su  u opadajucem redosledu." << endl;
//             return 0; // Ako cifre nisu u neopadajućem redosledu, izlazimo iz funkcije
//         }
//         else
//         {
//             poslednjaCifra = trenutaCifra; // Postavlja trenutnu cifru kao poslednju
//         }
//         a = a / 10; // Uklanja poslednju cifru
//     }

//     cout << "Cifre broja su u neopadajucem redosledu." << endl; // Ako su cifre u neopadajućem redosledu
//     return 0;
// }
//======================================================================
// bool jeProst(int n)
// {
//     if (n < 2)
//         return false;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int a, b;
//     int brojac = 0;

//     cout << "Unesi opseg (dva broja a i b): ";
//     cin >> a >> b;

//     for (int i = a; i <= b; i++)
//     {
//         if (jeProst(i))
//         {
//             brojac++;
//         }
//     }

//     cout << "Izmedju " << a << " i " << b << " ima " << brojac << " prostih brojeva." << endl;

//     return 0;
// }

//(n + a -1)
//(n + a - 1)
//======================================================================
// da kupi banane u radnji mora da plati 2k dpolara
// k je kolko kosta jedna banan
// k = kolko kosta banana n = koliko ima dolara   v = koliko zeli banana
// int main()
// {
//     int k, n, v;
//     int suma = 1;
//     cout << "unesi klk hoces";
//     cin >> k >> n >> v;

//     for (int i = 1; i < v; i++)
//     {
//         suma = (v * (v + 1)) / 2;//klk ga kosta
//     }

//     cout << suma;
// }
//======================================================================
// // DA li telo miruje ili je u ravnotezi samo da proveris da li su svi jedanki 0 ili ne
// int main()
// {
//     int n;
//     cout << "unesi broj sila" << endl;
//     cin >> n;

//     int sum_x = 0, sum_y = 0, sum_z = 0;
//     cout << "unesite " << n << " sila u formatu x y z\n";
//     for (int i = 0; i < n; i++)
//     {
//         int x, y, z;
//         cin >> x >> y >> z;
//         sum_x += x;
//         sum_y += y;
//         sum_z += z;
//     }
//     if (sum_x == 0 && sum_y == 0 && sum_z == 0)
//     {
//         cout << "Telo miruje." << endl;
//     }
//     else
//     {
//         cout << "Telo se krece u ravnotezi" << endl;
//     }
//     return 0;
// }
//======================================================================

// int main()
// {
//     int n, k;

//     cout << "unesi n " << endl;
//     cin >> n;
//     cout << "unesi k " << endl;
//     cin >> k;

//     for (int i = 0; i < k; i++)
//     {
//         if (n % 10 == 0)
//         {
//             n /= 10;
//         }
//         else
//         {
//             n--;
//         }
//     }
//     cout << "ovo je resenje" << n;
//     return 0;
// }
//======================================================================
// ima n stajalista,
// prazan je pre nego sto stigne na prvu stanicu, takodje kada stigne na zadnju stanicu svi putnici izlaze
// znaci na svakoj stanici prvo izlaze pa ulaze
// ai koji ulaze iz trmvava bi koji izlaze
// 2 <= n && n >=1000
// //==============================================================================
// int main()
// {
//     int n, ai, bi, putnici = 0;
//     int maxputnika = 0;
//     int min = 0;
//     cout << "Unesi n stajalista";
//     cin >> n;
//     if (n < 2 || n > 1000)
//     {
//         cout << "Uneli ste pogresan unos";
//         return 1;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << "unesi koliko izlazi i ulazi " << endl;
//         cin >> ai >> bi;
//         if (putnici <= ai)
//         {
//             putnici = 0;
//         }
//         else
//         {
//             putnici -= ai;
//             min -= ai;
//         }
//         putnici += bi;
//         min += bi;
//         if (i == n - 1 == 0)
//         {
//             min = 0;
//             return 1;
//         }
//     }
//     maxputnika = putnici;
//     cout << "ovo je broj minimalan kapacitet voza" << maxputnika;
// }
//===================================================================================
// // 1 zadatak
// // spavaonica n soba
// // u i-toj prostoriji zive pi ljudi i sobbni kapacitet  = ki osobe(pi <= ki)
// // prebrojati koliko soba ima slobodnog mesta za dzordza i aleksu

// int main()
// {
//     int n, pi, ki;
//     cout << "unesi broj soba" << endl;
//     int max = 0;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         cout << "unesi  broj ljudi koji su u sobi";
//         cin >> pi;
//         cout << "unesi broj kapaciteta sobe";
//         cin >> ki;
//         if (ki - pi >= 2)
//         {
//             max++;
//         }
//     }
//     cout << "trenutno je dostupno " << max << " sobe" << endl;
// }
//====================================================================================
// 2 zadatak
// n brojeva zadataka
// int main()
// {
//     int n, a, b, c;
//     cout << "unesi broj zadataka " << endl;
//     cin >> n;
//     int max = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "toni unosi da li je siguran " << endl;
//         cin >> a;
//         cout << "Imran unosi da li je siguran " << endl;
//         cin >> b;
//         cout << "Hamza unosi da li je siguran " << endl;
//         cin >> c;
//         if (a + b + c >= 2)
//         {
//             max++;
//         }
//     }
//     cout << "sigurni su da ce resiti " << max << "zadataka";
// }
//====================================================================================
// 3 zadatak
// k kuca prijatelja
// int main()
// {
//     int k;
//     cout
//         << "unesi broj kilometara " << endl;
//     cin >> k;
//     int max = 0;

//     for (int i = 0; i < k; i += 5)
//     {
//         if (k > i)
//         {
//             max++;
//         }
//     }
//     cout << max;
//     return 0;
// }
//====================================================================================
// 4 zadatak vojnik i banane
// k cena prve banane
// n pocetni broj dolara
// v broj banana koje zeli

// int main()
// {
//     int k, n, v;
//     int ukupnaCena = 0;
//     int itsEnought = 0;
//     int kolikoMuTreba = 0;
//     cout << "unesi cenu prve banane " << endl;
//     cin >> k;
//     cout << "unesi koliko dolara ima vojnik" << endl;
//     cin >> n;
//     cout << "unesi kolicinu banana koju vojnik zeli " << endl;
//     cin >> v;
//     // 3 17 4 == 13
//     ukupnaCena = k * (v * (v + 1)) / 2;
//     if (ukupnaCena <= n)
//     {
//         itsEnought++;
//     }
//     kolikoMuTreba = ukupnaCena - n;
//     itsEnought > 0 ? cout << 0 : cout << "Potrebno mu je jos " << kolikoMuTreba;
// }
//====================================================================================
// // 5 zadatak da li je u ravnotezi
// int main()
// {
//     int n, aSum = 0, bSum = 0, cSum = 0;
//     cout << "unesi pozitivan ceo broj " << endl;
//     cin >> n;
//     int max = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int a, b, c;
//         cout << "unesi prvi vektor" << endl;
//         cin >> a;
//         cout << "unesi drugi vektor" << endl;
//         cin >> b;
//         cout << "unesi treci vektor" << endl;
//         cin >> c;
//         aSum += a;
//         bSum += b;
//         cSum += c;
//     }
//     max == 0 ? cout << "da" : cout << "ne";
// }
