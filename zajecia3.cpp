#include <iostream>

class Kalkulator {
private:

    double mem;

    
    bool mem_used = false;


public:

    bool get() {
        return mem_used;
    }

    double dodawanie(double x, double y) {
        mem = x + y;
        mem_used = true;
        return mem;
    };

    double odejmowanie(double x, double y) {
        mem = x - y;
        mem_used = true;
        return mem;
    };

    double mnozenie(double x, double y) {
        mem = x * y;
        mem_used = true;
        return mem;
    };

    double dzielenie(double x, double y) {
        if (y == 0) {
            std::cout << "nie mozna dzielic przez 0, zmien liczbe" << std::endl;
            std::cin >> y;
        }
        mem = x / y;
        mem_used = true;
        return mem;
    };

    double modulo(double x, double y) {
        if (y == 0) {
            std::cout << "nie mozna dzielic przez 0, zmien liczbe" << std::endl;
            std::cin >> y;
        }
        mem = x - (int)(x / y) * y;
        mem_used = true;
        return mem;
    };

    void konwersja(int a, int b, int c) {
        int wynik[32];
        int idx = 0;
        int x;
        int y = c;

        if (b == 10) {
            x = a;
        }
        else {
            for (int i = 1; i < a; a /= 10)
                x = a % 10 * b;
        }


        while (x > 0) {
            wynik[idx++] = x % y;
            x /= y;
        }


        for (int i = idx - 1; i >= 0; i--) {
            std::cout << wynik[i];
        }
        std::cout << std::endl;
    };


    void erase() {
        mem = 0;
        mem_used = false;
    };

    void menu() {
        std::cout << "Wybierz opcje:" << std::endl;
        std::cout << "1 = dodawanie" << std::endl;
        std::cout << "2 = odejmowanie" << std::endl;
        std::cout << "3 = mnozenie" << std::endl;
        std::cout << "4 = dzielenie" << std::endl;
        std::cout << "5 = modulo" << std::endl;
        std::cout << "6 = usun pamiec" << std::endl;
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
            int a;
            int b;
            int c;
            std::cout << "Podaj  liczbe oraz system liczby i chcianego wyniku(do 10)" << std::endl;
            std::cin >> a >> b >> c;
            konwersja(a, b, c);
            break;

        default:
            std::cout << "nie ma takiej opcji." << std::endl;
            break;
        }

        menu();
    };

};

int main()
{
    Kalkulator kalkulator;
    kalkulator.menu();
}