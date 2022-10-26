// Copyright 2022 Bystrov Andrey

#include <iostream>
#include <string>

#include "include/kruskal_app.h"

int main(int argc, const char** argv) {
  CLPApplication app;
  std::string output = app(argc, argv);
  std::cout << output << std::endl;
  return 0;
}
