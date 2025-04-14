#ifndef KALKULATOR_H
#define KALKULATOR_H

class kalkulator {
private:
    double mem;
    bool mem_used;

public:
    kalkulator();

    bool get_mem_used();
    double get_mem();
    void set_mem(double x);

    double dodawanie(double x, double y);
    double odejmowanie(double x, double y);
    double mnozenie(double x, double y);
    double dzielenie(double x, double y);
    double modulo(double x, double y);

    int konwersja(int a, int b, int c);
    void erase();
};

#endif
