// Avanesov_pipe_cs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

struct Pipe {
    string name;
    float length;
    int diametr;
    bool repair;
};

struct Cs {
    string name;
    int workshop;
    int w_workshop;
    string clas;
};

void Menu(Pipe t) {
    while (1)
    {
        cout << "Choose option:\n1. Add pipe\n 2. Add Cs";
        int option;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Insert pipe name: ";
            cin >> t.name;
            break;
        case 3:
            cout << "Pipe name: " << t.name;
        };
    };
};


int main()
{
    cout << "Hello, World!\n";
    Pipe truba;
    truba.name = "Uchastok 1";
    cout << truba.name;
    Menu(truba);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
