#include <iostream>
using namespace std;
#include <cmath>
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
// 1 zadatak
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
// 2 zadatak
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
// 3 zadatak vojnik i banane
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
// // 4 zadatak da li je u ravnotezi
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
//         max = aSum + bSum + cSum;
//     }
//     max == 0 ? cout << "da" : cout << "ne";
// }
//================================================================================
// 5 zadatak
// int main()
// {
//     int k, n, aSum = 0, bSum = 0, cSum = 0;
//     cout << "broj od kojeg će Ilma oduzeti " << endl;
//     cin >> n;
//     cout << "broj oduzimanja shodno tome.​" << endl;
//     cin >> k;
//     int max = 0;
//     for (int i = 0; i < k; i++)
//     {
//         if (n % 10 == 0)
//         {
//             n /= 10;
//         }
//         else
//         {
//             n -= 1;
//         }
//     }
//     cout << n;
// }
//=============================================================
// // 6 zadatak voz
// // ai koji izlaze
// // bi koji ulaze
// // Prvi red sadrži jedan broj n (2 ≤ n ≤ 1000) — broj tramvajskih stanica.​
// int main()
// {
//     int n, ai, bi;
//     cout << "Unesi n stajalista" << endl;
//     cin >> n;
//     int min = 0;
//     int putnici = 0;

//     for (int i = 0; i < n; i++)
//     {
//         cout << "koliko izlaze u " << " " << i + 1 << "" << " stajalistu" << endl;
//         cin >> ai;
//         cout << "koliko ulaze u " << " " << i + 1 << " " << " stajalistu " << endl;
//         cin >>
//             bi;
//         if (ai > min && ai > putnici)
//         {
//             min = 0;
//             putnici = 0;
//         }
//         else
//         {
//             min -= ai;
//             putnici -= ai;
//         }
//         min += bi;
//         putnici += bi;
//         if (i == n - 1)
//         {
//             putnici = 0;
//         }
//     }
//     cout << "ovo su min - " << min << "i voz je na kraju prazan jer su svi otisli" << putnici << endl;
// }
//======================================================================
// // 7 zadatak
// // h visina
// // ai = visine i-te osobe
// // znaci samo treba da proveris ako je osoba veca od visine * 2 ili h*2 onda se racuna sirina
// // kao 2 a ako je manji od visine onda 1
// int main()
// {
//     int n, h, ai;
//     cout << "unesi broj prijatelja i visinu ograde" << endl;
//     cin >> n >> h;
//     int sirina = 0;
//     int nizAi[n];

//     for (int i = 0; i < n; i++)
//     {
//         cout << " unesi visunu " << i + 1 << " prijatelja" << endl;
//         cin >> nizAi[i];
//         if (1 <= nizAi[i] && nizAi[i] >= h * 2)
//         {
//             cout << " Nevalidan ulaz: visina mora biti između 1 i " << 2 * h << endl;
//             return 1;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (nizAi[i] > h)
//         {
//             sirina += 2;
//         }
//         else
//         {
//             sirina += 1;
//         }
//     }
//     cout << "ovo je sirina " << sirina;
// }
//====================================================================================
// // 8 zadatak
// // 0 = problem je lak
// // 1 problem je tezak
// int main()
// {
//     int n, ai;
//     cout << "Broj ljudi koje pitamo " << endl;
//     cin >> n;
//     int suma = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cout << i + 1 << " misljenje " << endl;
//         cin >> ai;
//         if (ai > 1)
//         {
//             cout << "nevalidan unos" << endl;
//             return 1;
//         }
//         suma += ai;
//     }
//     suma < 1 ? cout << "EASY" : cout << "HARD";
// }
//====================================================================================
// // zadatak 9
// // pi = koliko vec ima ljudi u sobe
// // ki = kapacitet sobe
// int main()
// {
//     int n, pi, ki;
//     cout << "Unesi broj soba" << endl;
//     cin >> n;
//     int brojSoba = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Unesi koliko u " << i + 1 << " sobi ima ljudi" << endl;
//         cin >> pi;
//         cout << "Unesi kapacitet" << i + 1 << " sobe" << endl;
//         cin >> ki;
//         if (ki - pi >= 2)
//         {
//             brojSoba++;
//         }
//         if (ki < pi)
//         {
//             cout << "Pogresan unos " << endl;
//             return 1;
//         }
//     }
//     cout << "broj soba  u koje dzordz i aleks mogu da se usele je " << brojSoba;
//     return 0;
// }
//====================================================================================
// // zadatak 10
// // n = broj koliko ce ispisati parnih i neparnih npr 5 =  1,3,5,2,4
// // k pozicija u niz
// int main()
// {
//     int n, k;
//     cout << "Unesi n  za neparne i parne brojeve";
//     cin >> n;
//     cout << "Unesi poziciju";
//     cin >> k;
//     for (int i = 1; i <= n; i += 2)
//     {
//         k--;
//         if (k == 0)
//         {
//             cout << i << endl;
//             return 0;
//         }
//     }

//     for (int i = 2; i <= n; i += 2)
//     {
//         k--;
//         if (k == 0)
//         {
//             cout << i << endl;
//             return 0;
//         }
//     }
//     return 0;
// }
//==============================================================
// 1 zadatak za pripremu ispita
// int main()
// {
//     int n, delilac;
//     cout << "unesi duzinu niza" << endl;
//     cin >> n;
//     cout << "unesi delilac" << endl;
//     cin >> delilac;
//     int arr[n];
//     double suma = 0;
//     int counter = 0;
//     cout << "unesi elemente niza";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if (arr[i] % delilac == 0)
//         {
//             counter++;
//             suma = suma + arr[i];
//         }
//     }
//     cout << suma / counter << endl;
// }
//=====================================================================
// Zadatak 3  za test broj koji je najveci pomocu da tih kombinacija
// int main()
// {
//     int a, b, c;
//     cout << "Unesi brojeve" << endl;
//     cin >> a >> b >> c;

//     int result1 = a + b + c;
//     int result2 = a + b * c;
//     int result3 = a * b + c;
//     int result4 = a * b * c;
//     int result5 = a * (b + c);
//     int result6 = (a * b) + c;
//     int maxResult = max({result1, result2, result3, result4, result5, result6});
//     cout << maxResult << endl;
//     return 0;
// }
//==============================================================================
// zadatak 4 za test
// n problema
// trebace mu 5* i da resi i-ti problem
// potrebno mu je k minuta da stigne od svoje kuce
// int main()
// {
//     int n, k;

//     cout << "unesi broj zadataka na takmicenju" << endl;
//     cin >> n;
//     cout << "broj minuta koje zejd treba da stigne  do zabave" << endl;
//     cin >> k;
//     int vremeResavanjaProblema = 0;
//     int maxVreme = 240;
//     int brojZadataka = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         cout << "vreme resavanja problema - " << vremeResavanjaProblema << "i*5" << i * 5;
//         if (maxVreme >= vremeResavanjaProblema + i * 5 + k)
//         // ovo mora ovako jer vremeresavanja problema vazi sumu sve do te iteracije i + i*5 tr iteracija
//         {
//             vremeResavanjaProblema += i * 5;
//             brojZadataka++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     cout << "Broj zadataka" << brojZadataka;

//     return 0;
// }
//=================================================================================
// 10 zadatak drugaciji nacin
// int main()
// {
//     int n, k;
//     cout << "unesi broj do kojeg ce ici brojevi";
//     cin >> n;
//     cout << "unesi poziciju";
//     cin >> k;
//     int pozicija = 0;
//     // ako unesen n = 10    k = 2
//     if (k > n)
//     {
//         cout << "pozicijan ne moze biti veca od duzine brojeva" << endl;
//         return 1;
//     }
//     for (int i = 1; i <= n; i += 2)
//     {
//         pozicija++;
//         if (pozicija == k)
//         {
//             cout << "ovo je na vasoj poziciji " << i << endl;
//             break;
//         }
//         cout << i << endl;
//     }
//     for (int i = 2; i <= n; i += 2)
//     {
//         pozicija5++;
//         if (pozicija == k)
//         {
//             cout << "ovo je na vasoj poziciji" << i << endl;
//             break;
//         }
//         cout << i << endl;
//     }
// }
//============================================================================
// #include <iostream>
// #include <string>
// using namespace std;
// class Osoba
// {
//     char ime[31], datum[11], adresa[31];

// public:
//     Osoba() { ime[0] = datum[0] = adresa[0] = 0; }
//     virtual void citaj()
//     {
//         cout << "Ime i prezime";
//         cin >> ime;
//         cout << "datum";
//         cin >> datum;
//         cout << "adresa";
//         cin >> adresa;
//     }
//     virtual void pisi() const
//     {
//         cout << "ime i prezime " << ime << endl;
//         cout << "Datum rodjenja " << datum << endl;
//         cout << "Adresa stanovanja " << adresa << endl;
//     }
//     virtual ~Osoba() {};
// };
// class Djak : public Osoba
// {
//     char skola[31], razred[7];

// public:
//     Djak() : Osoba() { skola[0] = razred[0] = 0; }
//     void citaj()
//     {
//         Osoba::
//             citaj();
//         cout << "naziv skole ";
//         cin >> skola;
//         cout << " razred";
//         cin >> razred;
//     }
//     void pisi()
//     {
//         Osoba::pisi();
//         cout << "Naziv skole: " << skola << endl;
//         cout << "Razred: " << razred << endl;
//     }
// };
// int main()
// {
//     Osoba *ljudi[20];
//     int n = 0;

//     cout << "citanje podataka o ljduima \n";
//     while (true)
//     {
//         cout << "\nIzbor (O = osoba,D = Djak,K = kraj)";
//         char izbor;
//         cin >> izbor;
//         if (izbor == 'K' || izbor == 'k')
//         {
//             break;
//         }
//         ljudi[n] = nullptr;
//         switch (izbor)
//         {
//         case 'O':
//         case 'o':
//             ljudi[n] = new Osoba;
//             break;
//         case 'D':
//         case 'd':
//             ljudi[n] = new Djak;
//             break;
//         default:
//             break;
//         }
//         if (ljudi[n])
//         {
//             ljudi[n++]->citaj();
//         }
//     }
//     cout << "\nPrikaz procitanih podataka\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << endl;
//         ljudi[i]->pisi();
//         delete ljudi[i];
//     }
//     return 0;
// }

// // Glavni program

// //         if (ljudi[n])
// //             ljudi[n++]->citaj();
// //     }

// //     cout << "\nPrikaz procitanih podataka\n";
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << endl;
// //         ljudi[i]->pisi();
// //         delete ljudi[i]; // Oslobadjanje memorije
// //     }

// //     return 0;
// // }
// //===================================================================================
// class Tacka
// {
//     double x, y;
//     int a, b;

// public:
//     void unesi()
//     {
//         cout << "Unesite prvu tačku (t1):" << endl;
//         cout << "Unesite koordinate tačke (x y): ";
//         cin >> x >> y;
//     }

//     void unesi_ab()
//     {
//         cout << "Unesite drugu tačku (t2):" << endl;
//         cout << "Unesite koordinate tačke (x y): ";
//         cin >> x >> y;
//         cout << "Unesite vrednosti a i b: ";
//         cin >> a >> b;
//     }

//     void pisi()
//     {
//         cout << "Tacka 1 :" << endl;
//         cout << '(' << x << ", " << y << ')';
//     }

//     void pisi_sa_ab()
//     {
//         cout << "Tacka 2 :" << endl;
//         cout << '(' << x << ", " << y << "), a=" << a << ", b=" << b;
//     }

//     double rastojanje(Tacka t)
//     {
//         return sqrt(pow(x - t.x, 2) + pow(y - t.y, 2));
//     }

//     int suma(Tacka t)
//     {
//         return t.a + t.b;
//     }
// };

// int main()
// {
//     Tacka t1, t2;
//     t1.unesi();
//     t2.unesi_ab();
//     t1.pisi();
//     t2.pisi_sa_ab();
//     cout << "rastojanje izmedju tacaka je " << t1.rastojanje(t2) << endl;
//     cout << "suma je" << t1.suma(t2);
//     return 0;
// }
//================================================================================
// class Osoba
// {
// public:
//     string ime, prezime;
//     int godine;
// };

// int main()
// {
//     Osoba o;
//     o.ime = "hamza";
//     o.godine = 10;
//     o.prezime = "gorcevic";
//     Osoba h;
//     h.ime = "haris";
//     h.godine = 10;
//     h.prezime = "gorcevic";
//     Osoba k;
//     cin >> k.ime;
//     cin >> k.prezime;
//     cin >> k.godine;
// }
//==================================================================
// #include <iostream>
// using namespace std;

// class Zivotinja
// {
// public:
//     virtual void napraviZvuk()
//     {
//         cout << "Zivotinja pravi neki zvuk..." << endl;
//     }
// };

// class Pas : public Zivotinja
// {
// public:
//     void napraviZvuk() override
//     {
//         cout << "Av, av!" << endl;
//     }
// };

// class Macka : public Zivotinja
// {
// public:
//     void napraviZvuk() override
//     {
//         cout << "Mjau!" << endl;
//     }
// };

// void pustiZvuk(Zivotinja *z)
// {
//     z->napraviZvuk();
// }

// int main()
// {
//     Pas p;
//     Macka m;

//     pustiZvuk(&p); // poziva Pas::napraviZvuk
//     pustiZvuk(&m); // poziva Macka::napraviZvuk
// }
// //=========================================================================
// #include <iostream>
// using namespace std;

// class Vozilo
// {
//     double sopstvenaTezina;

// public:
//     Vozilo(double st) : sopstvenaTezina(st) {}

//     virtual char vrsta() const = 0;
//     virtual double tezina() const { return sopstvenaTezina; }

//     virtual void ispisi() const
//     {
//         cout << vrsta() << "(" << sopstvenaTezina << ")";
//     }
// };

// class PutnickoVozilo : public Vozilo
// {
//     double srednjaTezinaPutnika;
//     int brojPutnika;

// public:
//     PutnickoVozilo(double st, double srt, int bp)
//         : Vozilo(st), srednjaTezinaPutnika(srt), brojPutnika(bp) {}
//     char vrsta() const override { return 'P'; }

//     double tezina() const override
//     {
//         return Vozilo::tezina() + srednjaTezinaPutnika * brojPutnika;
//     }

//     void ispisi() const override
//     {
//         cout << vrsta() << "(" << Vozilo::tezina() << "," << srednjaTezinaPutnika << "," << brojPutnika << ")";
//     }
// };

// class TeretnoVozilo : public Vozilo
// {
//     double tezinaTereta;
// public:
//     TeretnoVozilo(double st, double t) : Vozilo(st), tezinaTereta(t) {}
//     char vrsta() const override { return 'T'; }
//     double tezina() const override
//     {
//         return Vozilo::tezina() + tezinaTereta;
//     }

//     void ispisi() const override
//     {
//         cout << vrsta() << "(" << Vozilo::tezina() << "," << tezinaTereta << ")";
//     }
// };

// int main()
// {
//     Vozilo *vozila[100];
//     int n = 0;
//     while (true)
//     {
//         cout << "Vrsta vozila (T,P,*)? ";
//         char vrsta;
//         cin >> vrsta;
//         if (vrsta == '*')
//             break;
//         if (vrsta == 'T' || vrsta == 't')
//         {
//             cout << "Sopstvena tezina? ";
//             double sTez;
//             cin >> sTez;
//             cout << "Tezina tereta? ";
//             double ter;
//             cin >> ter;
//             vozila[n++] = new TeretnoVozilo(sTez, ter);
//         }
//         else if (vrsta == 'P' || vrsta == 'p')
//         {
//             cout << "Sopstvena tezina? ";
//             double sTez;
//             cin >> sTez;
//             cout << "Sr. tezina putnika? ";
//             double srTez;
//             cin >> srTez;
//             cout << "Broj putnika? ";
//             int brPut;
//             cin >> brPut;
//             vozila[n++] = new PutnickoVozilo(sTez, srTez, brPut);
//         }
//         else
//         {
//             cout << "*** Nepoznata vrsta vozila!\n";
//         }
//     }
//     cout << "Nosivost mosta? ";
//     double nosivost;
//     cin >> nosivost
//     cout << "\nVozila koja mogu da predju most:\n";
//     for (int i = 0; i < n; i++)
//     {
//         if (vozila[i]->tezina() <= nosivost)
//         {
//             vozila[i]->ispisi();
//             cout << " - " << vozila[i]->tezina() << " kg\n";
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         delete vozila[i];
//     }
//     return 0;
// }
//======================================================================================
// class Vozilo
// {
//     double sopstvenaTezina;

// public:
//     Vozilo(double st) : sopstvenaTezina(st) {};
//     virtual char Vrsta() = 0;
//     virtual double Tezina()
//     {
//         return sopstvenaTezina;
//     }
//     virtual void Ispisi()
//     {
//         cout << Vrsta() << "sopstvena tezina " << sopstvenaTezina;
//     }
// };

// class PutnickoVozilo : public Vozilo
// {
//     double srednjaTezinaPutnika;
//     int brojPutnika;

// public:
//     PutnickoVozilo(double sT, double stP, int bP) : Vozilo(sT), srednjaTezinaPutnika(stP), brojPutnika(bP) {};
//     char Vrsta() override { return 'P'; }
//     double Tezina() override
//     {
//         return Vozilo::Tezina() + srednjaTezinaPutnika * brojPutnika;
//     }
//     void ispisi()
//     {
//         cout << Vrsta() << "(" << Vozilo::Tezina() << "," << srednjaTezinaPutnika << "," << brojPutnika << ")";
//     }
// };
// class TeretnoVozolo : public Vozilo
// {
//     double tezinaTereta;

// public:
//     TeretnoVozolo(double sT, double tT) : Vozilo(sT), tezinaTereta(tT) {};
//     char Vrsta() override
//     {
//         return 'T';
//     }
//     double Tezina() override
//     {
//         return Vozilo::Tezina() + tezinaTereta;
//     }
//     virtual void Ispisi()
//     {
//         cout << Vrsta() << "sopstvena tezina : " << Vozilo::Tezina() << "tezina tereta:" << tezinaTereta;
//     }
// };
// int main()
// {
//     Vozilo *vozila[100];
//     int n = 0;

//     while (true)
//     {
//         cout << "unesi (t,p,*)";
//         char vrsta;
//         cin >> vrsta;
//         if (vrsta == '*')
//         {
//             break;
//         }
//         if (vrsta == 'p')
//         {
//             cout << "unesi sopstvenu tezinu :";
//             double sT;
//             cin >> sT;
//             cout << "unesi srednju tezinu putnika";
//             double stP;
//             cin >> stP;
//             cout << "unesi broj putnika";
//             int bP;
//             cin >> bP;
//             vozila[n++] = new PutnickoVozilo(sT, stP, bP);
//         }
//         else if (vrsta == 't')
//         {
//             cout << "unesi sopstvenu tezinu :";
//             double sT;
//             cin >> sT;
//             cout << "unesi tezinu tereta :";
//             double tezinaTereta;
//             cin >> tezinaTereta;
//             vozila[n++] = new TeretnoVozolo(sT, tezinaTereta);
//         }
//     }
//     cout << "Unesi nosivost mosta";
//     double nosivost;
//     cin >> nosivost;
//     cout << "\nVozila koja mogu da predju most:\n";
//     for (int i = 0; i < n; i++)
//     {
//         if ((*vozila[i]).Tezina() <= nosivost)
//         {
//             vozila[i]->Ispisi();
//         }
//     }
//     return 0;
// }
//===========================================================
// #include <iostream>
// using namespace std;

// class Pravougaonik
// {
//     double sirina, visina;

// public:

//     double Povrsina()
//     {
//         return sirina * visina;
//     }

//     void Ispisi()
//     {
//         cout << "Sirina: " << sirina << ", Visina: " << visina << ", Povrsina: " << Povrsina() << endl;
//     }
// };

// int main()
// {
//     int n;
//     cout << "Koliko pravougaonika zelite da unesete? ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         double sirina, visina;
//         cout << "Unesi sirinu i visinu za pravougaonik #" << (i + 1) << ": ";
//         cin >> sirina >> visina;

//         Pravougaonik p(sirina, visina);
//         p.Ispisi();
//     }
//     return 0;
// }
//=======================================================================================
class Vozilo
{
    double sopstvenaTezina;

public:
    Vozilo(double st) : sopstvenaTezina(st) {};
    virtual char Vrsta() = 0;

    virtual double Tezina()
    {
        return sopstvenaTezina;
    }

    virtual void Ispisi()
    {
        cout << Vrsta() << " sopstvena tezina: " << sopstvenaTezina << endl;
    }
};

class PutnickoVozilo : public Vozilo
{
    double srednjaTezinaPutnika;
    int brojPutnika;

public:
    PutnickoVozilo(double sT, double stP, int bP)
        : Vozilo(sT), srednjaTezinaPutnika(stP), brojPutnika(bP) {}

    char Vrsta() override { return 'P'; }

    double Tezina() override
    {
        return Vozilo::Tezina() + srednjaTezinaPutnika * brojPutnika;
    }

    void Ispisi() override
    {
        cout << Vrsta() << " (" << Vozilo::Tezina() << ", "
             << srednjaTezinaPutnika << ", " << brojPutnika << ") = ukupno: "
             << Tezina() << " kg" << endl;
    }
};

class TeretnoVozolo : public Vozilo
{
    double tezinaTereta;

public:
    TeretnoVozolo(double sT, double tT)
        : Vozilo(sT), tezinaTereta(tT) {}

    char Vrsta() override
    {
        return 'T';
    }

    double Tezina() override
    {
        return Vozilo::Tezina() + tezinaTereta;
    }

    void Ispisi() override
    {
        cout << Vrsta() << " (sopstvena: " << Vozilo::Tezina()
             << ", teret: " << tezinaTereta << ") = ukupno: "
             << Tezina() << " kg" << endl;
    }
};

int main()
{
    Vozilo *vozila[100];
    int n = 0;

    while (true)
    {
        cout << "Unesi vrstu vozila (p = putnicko, t = teretno, * = kraj): ";
        char vrsta;
        cin >> vrsta;

        if (vrsta == '*')
        {
            break;
        }

        if (vrsta == 'p')
        {
            double sT, stP;
            int bP;
            cout << "Unesi sopstvenu tezinu: ";
            cin >> sT;
            cout << "Unesi srednju tezinu putnika: ";
            cin >> stP;
            cout << "Unesi broj putnika: ";
            cin >> bP;
            vozila[n++] = new PutnickoVozilo(sT, stP, bP);
        }
        else if (vrsta == 't')
        {
            double sT, tezinaTereta;
            cout << "Unesi sopstvenu tezinu: ";
            cin >> sT;
            cout << "Unesi tezinu tereta: ";
            cin >> tezinaTereta;
            vozila[n++] = new TeretnoVozolo(sT, tezinaTereta);
        }
        else
        {
            cout << "Nepoznata komanda, pokusaj ponovo.\n";
        }
    }

    cout << "Unesi nosivost mosta: ";
    double nosivost;
    cin >> nosivost;

    cout << "\nVozila koja mogu da predju most:\n";
    for (int i = 0; i < n; i++)
    {
        if (vozila[i]->Tezina() <= nosivost)
        {
            vozila[i]->Ispisi();
        }
    }

    for (int i = 0; i < n; i++)
    {
        delete vozila[i];
    }

    return 0;
}
//=====================================================================================
// #include <iostream>
// #include <string>
// using namespace std;

// class Osoba
// {
// protected:
//     string ime;
//     string datumRodjenja;
//     string adresa;

// public:
//     Osoba() : ime(""), datumRodjenja(""), adresa("") {}

//     virtual void Ucitaj()
//     {
//         cout << "Unesi ime: ";
//         cin.ignore(); // da bi cin >> radio ispravno nakon prethodnog unosa
//         getline(cin, ime);
//         cout << "Unesi datum rodjenja: ";
//         getline(cin, datumRodjenja);
//         cout << "Unesi adresu: ";
//         getline(cin, adresa);
//     }

//     virtual void Ispisi() const
//     {
//         cout << "Ime: " << ime << ", Datum rodjenja: " << datumRodjenja
//              << ", Adresa: " << adresa;
//     }
// };

// class Djak : public Osoba
// {
//     string nazivSkole;
//     int razred;

// public:
//     Djak() : Osoba(), nazivSkole(""), razred(0) {}

//     void Ucitaj() override
//     {
//         Osoba::Ucitaj();
//         cout << "Unesi naziv skole: ";
//         getline(cin, nazivSkole);
//         cout << "Unesi razred: ";
//         cin >> razred;
//     }

//     void Ispisi() const override
//     {
//         Osoba::Ispisi();
//         cout << ", Skola: " << nazivSkole << ", Razred: " << razred << endl;
//     }
// };

// class Zaposleni : public Osoba
// {
//     string nazivPreduzeca;
//     string odeljenje;

// public:
//     Zaposleni() : Osoba(), nazivPreduzeca(""), odeljenje("") {}

//     void Ucitaj() override
//     {
//         Osoba::Ucitaj();
//         cin.ignore();
//         cout << "Unesi naziv preduzeca: ";
//         getline(cin, nazivPreduzeca);
//         cout << "Unesi naziv odeljenja: ";
//         getline(cin, odeljenje);
//     }

//     void Ispisi() const override
//     {
//         Osoba::Ispisi();
//         cout << ", Preduzece: " << nazivPreduzeca << ", Odeljenje: " << odeljenje << endl;
//     }
// };

// int main()
// {
//     Osoba *osobe[100];
//     int n = 0;

//     while (true)
//     {
//         cout << "Unesi tip osobe (d = djak, z = zaposleni, * = kraj): ";
//         char tip;
//         cin >> tip;

//         if (tip == '*')
//         {
//             break;
//         }

//         if (tip == 'd')
//         {
//             osobe[n] = new Djak();
//             osobe[n++]->Ucitaj();
//         }
//         else if (tip == 'z')
//         {
//             osobe[n] = new Zaposleni();
//             osobe[n++]->Ucitaj();
//         }
//         else
//         {
//             cout << "Nepoznat tip. Pokusaj ponovo.\n";
//         }
//     }

//     cout << "\nUnete osobe:\n";
//     for (int i = 0; i < n; i++)
//     {
//         osobe[i]->Ispisi();
//     }

//     // Oslobodi memoriju
//     for (int i = 0; i < n; i++)
//     {
//         delete osobe[i];
//     }
//     return 0;
// }
//=====================================================================================
