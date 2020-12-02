#include "Header.h"

поезд a;
поезд b(10,55,18.6);

int main()
{
    system("color F0");	//фон белый буквы черные
    setlocale(LC_ALL, "Russian");

    cout << "Поезд а " << a.GetТип() << " " << a.GetВагон() << " " << a.GetГрузоподъёмность()  << endl;
    cout << "Поезд б(10,55,18.6) " << b.GetТип() << " " << b.GetВагон() << " " << b.GetГрузоподъёмность() << endl;
    a.SetГрузоподъёмность(10);
    a.SetВагон(10);
    a.SetТип(10);
    cout << "\nИзменение пораметров а с помощью ф-ий Set\n";
    cout << a.GetТип() << " " << a.GetВагон() << " " << a.GetГрузоподъёмность() << endl;
    cout << "\nif(a < b)\n";
    if(a < b)
     cout << b.GetТип() << " " << b.GetВагон() << " " << b.GetГрузоподъёмность() << endl;
    cout << "\nif(a > b)\n";
    if (a > b)
        cout << b.GetТип() << " " << b.GetВагон() << " " << b.GetГрузоподъёмность() << endl;
    cout << "\n++b; --a;\n";
    ++b; --a;
    cout << b.GetВагон() << " " << b.GetГрузоподъёмность() << " " << b.GetТип() << endl;
    cout << a.GetТип() << " " << a.GetВагон() << " " << a.GetГрузоподъёмность() << endl;

}
