#pragma once
#include "address.hpp"
#include <iostream>
#include <stdio.h>
#include <string>

class Student {

  std::string name_;
  std::string surname_;
  Address address_;
  size_t indexNum_;
  uint PESEL_;
  std::string sex_;

public:
  std::string getName();
  std::string getSurname();
  void getIndexNum();
  void printData();

  Student(std::string name, std::string surname, size_t indexNum, uint PESEL,
          std::string sex)
      : name_(name), surname_(surname), indexNum_(indexNum), PESEL_(PESEL),
        sex_(sex){};

  //~Student();
};
// Przechowywanie rekordów studentów o strukturze: Imię, nazwisko, adres, nr
// indeksu, PESEL, płeć
// Dodawanie nowych studentów Wyświetlanie całej bazy
// danych Wyszukiwanie po nazwisku Wyszukiwanie po numerze PESEL Sortowanie po
// numerze PESEL Sortowanie po nazwisku Usuwanie po numerze indeksu

// Walidacja czy numer PESEL jest poprawny Wiki - poprawność PESEL (trudne)
// Wczytywanie z pliku i zapisywanie całej bazy w pliku (trudne)