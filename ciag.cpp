
#include "ciag.h"

ciag::ciag() : a0(1), ciagList({}) { std::cout << "Konstruktor" << std::endl; }

ciag::~ciag() { std::cout << "Destruktor" << std::endl; }

ciag InicjalizujCiagGeometryczny(rozmiarCiagu rozmiar, int iloraz) {

  ciag ciagGeo = ciag();
  for (rozmiarCiagu i = 0; i < rozmiar; i++) {
    if (i == 0) {
      ciagGeo.ciagList.push_back(1);
      continue;
    }
    ciagGeo.ciagList.push_back(ciagGeo.ciagList[0] * pow(iloraz, (i)));
  }
  return ciagGeo;
}

void Wypisz(const ciag &ciag, rozmiarCiagu rozmiar) {
  std::cout << "rozmiar" << ciag.ciagList.size() << std::endl;
  if (rozmiar > ciag.ciagList.size()) {
    std::cout << "Error, rozmiar wiekszy niz size listy" << std::endl;
  }
  for (rozmiarCiagu i = 0; i < rozmiar; i++) {
    std::cout << i << "elem: " << ciag.ciagList[i] << ", ";
  }
  std::cout << std::endl;
}

void Suma(const ciag &ciag, rozmiarCiagu rozmiar) {
  int suma = 0;
  for (rozmiarCiagu i = 0; i < rozmiar; i++) {
    suma += ciag.ciagList[i];
  }
  std::cout << "Suma:" << suma << std::endl;
}

void Iloczyn(const ciag &ciag, rozmiarCiagu rozmiar) {
  int iloczyn = 1;
  for (rozmiarCiagu i = 0; i < rozmiar; i++) {
    iloczyn *= ciag.ciagList[i];
  }
  std::cout << "Iloczyn:" << iloczyn << std::endl;
}

void Min(const ciag &ciag, rozmiarCiagu rozmiar) {
  auto copyOfList = ciag.ciagList;
  sort(copyOfList.begin(), copyOfList.end());
  std::cout << "Min: " << copyOfList[0] << std::endl;
}

void Max(const ciag &ciag, rozmiarCiagu rozmiar) {
  auto copyOfList = ciag.ciagList;
  std::sort(copyOfList.begin(), copyOfList.end(), std::greater<int>());
  std::cout << "Max: " << copyOfList[0] << std::endl;
}

typedef void (*operacja)(const ciag &, rozmiarCiagu);

void WykonajIWypisz(operacja op, ciag ciag, rozmiarCiagu rozmiar) {
  op(ciag, rozmiar);
}
