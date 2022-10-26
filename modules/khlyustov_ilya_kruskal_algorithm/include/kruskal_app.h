// Copyright 2022 Bystrov Andrey

#ifndef MODULES_KHLYUSTOV_ILYA_KRUSKAL_ALGORITHM_INCLUDE_KRUSKAL_APP_H_
#define MODULES_KHLYUSTOV_ILYA_KRUSKAL_ALGORITHM_INCLUDE_KRUSKAL_APP_H_

#include <string>

class CLPApplication {
 public:
  CLPApplication();
  std::string operator()(int argc, const char** argv);

 private:
  std::string help();
  std::string argument_error();
};

#endif  //  MODULES_KHLYUSTOV_ILYA_KRUSKAL_ALGORITHM_INCLUDE_KRUSKAL_APP_H_
