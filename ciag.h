#pragma once
#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <vector>

typedef unsigned int rozmiarCiagu;

class ciag {
public:
  int a0;
  std::vector<int> ciagList;
  ciag();
  ~ciag();
};

ciag InicjalizujCiagGeometryczny(rozmiarCiagu rozmiar, int iloraz);

void Wypisz(const ciag &ciag, rozmiarCiagu rozmiar);

void Suma(const ciag &ciag, rozmiarCiagu rozmiar);

void Iloczyn(const ciag &ciag, rozmiarCiagu rozmiar);

void Min(const ciag &ciag, rozmiarCiagu rozmiar);

void Max(const ciag &ciag, rozmiarCiagu rozmiar);

typedef void (*operacja)(const ciag &, rozmiarCiagu);

void WykonajIWypisz(operacja op, ciag ciag, rozmiarCiagu rozmiar);
