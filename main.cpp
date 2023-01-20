#include "ciag.h"

int main() {
  const rozmiarCiagu rozmiar = 6;
  const float iloraz1 = 2;

  // pierwszy element ciagu to 1
  const ciag geometryczny1 = InicjalizujCiagGeometryczny(rozmiar, iloraz1);

  Wypisz(geometryczny1, rozmiar);

  const float iloraz2 = 3.;
  const ciag geometryczny2 = InicjalizujCiagGeometryczny(rozmiar, iloraz2);
  Wypisz(geometryczny2, rozmiar);

  Suma(geometryczny1, rozmiar);

  operacja przeksztalc[] = {Suma, Iloczyn, Max, Min};

  const int ileOperacji = sizeof(przeksztalc) / sizeof(operacja);

  for (int i = 0; i < ileOperacji; ++i)
    WykonajIWypisz(przeksztalc[i], geometryczny1, rozmiar);
}