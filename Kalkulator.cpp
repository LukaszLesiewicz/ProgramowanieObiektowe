#include <iostream> 


double mem;

bool mem_used;

double dodawanie(double x, double y) {
    mem = x + y;
    mem_used = true;
    return mem;
}

double odejmowanie(double x, double y) {
    mem = x - y;
    mem_used = true;
    return mem;
}

double mnozenie(double x, double y) {
    mem = x * y;
    mem_used = true;
    return mem;
}

double dzielenie(double x, double y) {
    if (y == 0) {
        std::cout << "nie mozna dzielic przez 0, zmien liczbe" << std::endl;
        std::cin >> y;
    }
    mem = x / y;
    mem_used = true;
    return mem;
}

double modulo(double x, double y) {
    if (y == 0) {
        std::cout << "nie mozna dzielic przez 0, zmien liczbe" << std::endl;
        std::cin >> y;
    }
    mem = x - (int)(x / y) * y;
    mem_used = true;
    return mem;
}

void erase() {
    mem = 0;
    mem_used = false;
}

void konwersja(int x, int y) {
    int wynik[32]; 
    int idx = 0;

    while (x > 0) {
        wynik[idx++] = x % y; 
        x /= y; 
    }


    for (int i = idx - 1; i >= 0; i--) {
        std::cout << wynik[i];
    }
    std::cout << std::endl;
}

void menu() {
    std::cout << "Wybierz opcje:" << std::endl;
    std::cout << "1 = dodawanie" << std::endl;
    std::cout << "2 = odejmowanie" << std::endl;
    std::cout << "3 = mnozenie" << std::endl;
    std::cout << "4 = dzielenie" << std::endl;
    std::cout << "5 = modulo" << std::endl;
    std::cout << "6 = usun pamiec" << std::endl;
    std::cout << "7 = konwersja na inny system liczbowy" << std::endl;
    int operacja;
    double x;
    double y;
    std::cin >> operacja;
    switch (operacja)
    {
    case 1:
        if (mem_used == false) {
            std::cout << "Podaj 1 i 2 liczbe" << std::endl;
            std::cin >> x >> y;
            std::cout << dodawanie(x, y) << std::endl;
        }
        else {
            std::cout << "Podaj kolejna liczbe" << std::endl;
            std::cin >> x;
            std::cout << dodawanie(mem, x) << std::endl;
        }
        break;

    case 2:
        if (mem_used == false) {
            std::cout << "Podaj 1 i 2 liczbe" << std::endl;
            std::cin >> x >> y;
            std::cout << odejmowanie(x, y) << std::endl;
        }
        else {
            std::cout << "Podaj kolejna liczbe" << std::endl;
            std::cin >> x;
            std::cout << odejmowanie(mem, x) << std::endl;
        }
        break;

    case 3:
        if (mem_used == false) {
            std::cout << "Podaj 1 i 2 liczbe" << std::endl;
            std::cin >> x >> y;
            std::cout << mnozenie(x, y) << std::endl;
        }
        else {
            std::cout << "Podaj kolejna liczbe" << std::endl;
            std::cin >> x;
            std::cout << mnozenie(mem, x) << std::endl;
        }
        break;

    case 4:
        if (mem_used == false) {
            std::cout << "Podaj 1 i 2 liczbe" << std::endl;
            std::cin >> x >> y;
            std::cout << dzielenie(x, y) << std::endl;
        }
        else {
            std::cout << "Podaj kolejna liczbe" << std::endl;
            std::cin >> x;
            std::cout << dzielenie(mem, x) << std::endl;
        }
        break;

    case 5:
        if (mem_used == false) {
            std::cout << "Podaj 1 i 2 liczbe" << std::endl;
            std::cin >> x >> y;
            std::cout << modulo(x, y) << std::endl;
        }
        else {
            std::cout << "Podaj kolejna liczbe" << std::endl;
            std::cin >> x;
            std::cout << modulo(mem, x) << std::endl;
        }
        break;

    case 6:
        erase();
        break;

    case 7:
        if (mem_used == false) {
            std::cout << "Podaj  liczbe oraz system(do 10)" << std::endl;
            std::cin >> x >>y;
            konwersja(x, y);
        }
        else {
            std::cout << "Podaj system(do 10)" << std::endl;
            std::cin >> x;
            konwersja(mem, x);
        }
        break;


    default:
        std::cout << "nie ma takiej opcji." << std::endl;
        break;
    }
    menu();
}

int main()
{
    menu();
}