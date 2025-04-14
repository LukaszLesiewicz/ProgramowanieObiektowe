#include "kalkulator.h"
#include <cmath>

kalkulator::kalkulator() {
    mem = 0;
    mem_used = false;
}

bool kalkulator::get_mem_used() {
    return mem_used;
}

double kalkulator::get_mem(){
    return mem;
}

void kalkulator::set_mem(double x){
    mem = x;
}


double kalkulator::dodawanie(double x, double y) {
    double wynik = x + y;
    mem = std::round(wynik * 100000.0) / 100000.0;
    mem_used = true;
    return mem;
}

double kalkulator::odejmowanie(double x, double y) {
    double wynik = x - y;
    mem = std::round(wynik * 100000.0) / 100000.0;
    mem_used = true;
    return mem;
}

double kalkulator::mnozenie(double x, double y) {
    double wynik = x * y;
    mem = std::round(wynik * 100000.0) / 100000.0;
    mem_used = true;
    return mem;
}

double kalkulator::dzielenie(double x, double y) {
    double wynik = x / y;
    mem = std::round(wynik * 100000.0) / 100000.0;
    mem_used = true;
    return mem;
}

double kalkulator::modulo(double x, double y) {
    mem = x - (int)(x / y) * y;
    mem_used = true;
    return mem;
}

int kalkulator::konwersja(int systemZ, int systemDo, int a) {

    int dziesietna = 0;
    int potega = 1;
    int temp = a;

    while (temp > 0) {
        int cyfra = temp % 10;
        if (cyfra >= systemZ)
            return -2;
        dziesietna += cyfra * potega;
        potega *= systemZ;
        temp /= 10;
    }

    int wynik = 0;
    int place = 1;
    int digitCount = 0;
    while (dziesietna > 0) {
        int cyfra = dziesietna % systemDo;
        wynik += cyfra * place;
        place *= 10;
        dziesietna /= systemDo;
        digitCount++;

        if (digitCount > 12) {
            return -1;
        }
    }
    return wynik;
}

void kalkulator::erase() {
    mem = 0;
    mem_used = false;
}
