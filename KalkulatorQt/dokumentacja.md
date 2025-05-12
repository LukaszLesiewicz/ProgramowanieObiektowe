# Kalkulator

Projekt polegał na stworzeniu prostego kalkulatora, który obsługuje operacje matematyczne, takie jak dodawanie, odejmowanie, mnożenie, dzielenie, obliczanie reszty z dzielenia (modulo) oraz konwersję systemów liczbowych.

## Struktura działania

Główna część logiki aplikacji znajduje się w klasie `Kalkulator`. Klasa ta posiada metody odpowiadające za przeprowadzanie operacji matematycznych, konwersje liczbowe oraz funkcje `get` i `set` do zarządzania pamięcią. Kod klasy jest podzielony na pliki nagłówkowe `.h` i implementacyjne `.cpp`, a także odpowiednio zhermetyzowany.

GUI (interfejs graficzny) jest zarządzane przez klasę `MainWindow`. Plik `mainwindow.ui` odpowiada za rozmieszczenie elementów interfejsu, takich jak przyciski, które dzięki zastosowaniu layoutu są równe oraz estetyczne. Każdy z przycisków jest funkcjonalny, reagując na kliknięcie i wykonując odpowiednią operację lub wyświetlając liczbę. Przyciski zmieniają kolor, gdy najedziemy na nie myszką, co poprawia interakcję użytkownika z aplikacją. Po wciśnięciu pierwszej liczby oraz znaku operacji matematycznej, te dane są wyświetlane nad ekranem kalkulatora. Ułatwia to użytkownikowi śledzenie wprowadzonej operacji — pierwszej liczby i wybranej operacji — zanim zostanie podana druga liczba i obliczony wynik.

Dodatkowo, przycisk w menu wywołuje okno, w którym użytkownik może:
- przejść do kalkulatora konwertującego systemy liczbowe,
- zapoznać się z informacjami o autorze.

Konwersje można przeprowadzać między systemami liczbowymi o podstawach od **2 do 10** (czyli np. z binarnego na dziesiętny, z ósemkowego na czwórkowy itd.).

Każde z okien ma ustaloną, stałą wielkość, której użytkownik nie może zmieniać. W plikach `mainwindow.cpp` i `secondwindow.cpp` znajduje się kod, który łączy logikę kalkulatora z interfejsem graficznym.

Kalkulator jest zaprojektowany z myślą o przejrzystości i łatwości obsługi. W przypadku błędów (np. dzielenie przez zero, modulo przez zero czy nieprawidłowe cyfry w liczbie konwertowanej), aplikacja wyświetla odpowiedni komunikat za pomocą okna `MessageBox`, informując użytkownika o problemie.

Interfejs kalkulatora jest utrzymany w różowych barwach, a tło w menu oraz w oknach informacyjnych o autorze zawiera zdjęcia z bohaterami z filmu **Barbie**, nadając aplikacji przyjazny, estetyczny wygląd.