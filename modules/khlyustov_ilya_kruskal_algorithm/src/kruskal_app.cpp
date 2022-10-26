// Copyright 2022 Bystrov Andrey

#include "include/kruskal_app.h"

#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

#include "include/kruskal.h"

CLPApplication::CLPApplication() {}

std::string CLPApplication::operator()(int argc, const char** argv) {
  std::ostringstream os;

  if (argc == 1) {
    return this->argument_error();
  }
  if (std::string(argv[1]) == "--help" || std::string(argv[1]) == "-h") {
    return this->help();
  }
  int i = 1;

  if (std::string(argv[i]) == "--test1" || std::string(argv[i]) == "-t1") {
    size_t nodes = atoi(argv[2]);
    std::vector<Edge> edges = {
        Edge(atoi(argv[3]), atoi(argv[4]), atoi(argv[5])),
        Edge(atoi(argv[6]), atoi(argv[7]), atoi(argv[8])),
    };
    Graph testGraph(nodes, edges);
    // EXPECT_EQ(edges, testGraph.getMST());
    os << testGraph.getMST().size();
    std::cout << os.str() << std::endl;
    return "success";
  }
  if (std::string(argv[i]) == "--test2" || std::string(argv[i]) == "-t2") {
    size_t nodes = atoi(argv[2]);
    std::vector<Edge> edges = {
        Edge(atoi(argv[3]), atoi(argv[4]), atoi(argv[5])),
        Edge(atoi(argv[6]), atoi(argv[7]), atoi(argv[8])),
    };
    Graph testGraph(nodes, edges);
    // EXPECT_EQ(edges, testGraph.getMST());
    os << testGraph.getMST().size();
    std::cout << os.str() << std::endl;
    return "success";
  }
  if (std::string(argv[i]) == "--test3" || std::string(argv[i]) == "-t3") {
    size_t nodes = atoi(argv[2]);
    std::vector<Edge> edges = {
        Edge(atoi(argv[3]), atoi(argv[4]), atoi(argv[5])),
        Edge(atoi(argv[6]), atoi(argv[7]), atoi(argv[8])),
    };
    Graph testGraph(nodes, edges);
    // EXPECT_EQ(edges, testGraph.getMST());
    os << testGraph.getMST().size();
    std::cout << os.str() << std::endl;
    return "success";
  }
  if (std::string(argv[i]) == "--test4" || std::string(argv[i]) == "-t4") {
    size_t nodes = atoi(argv[2]);
    std::vector<Edge> edges = {
        Edge(atoi(argv[3]), atoi(argv[4]), atoi(argv[5])),
        Edge(atoi(argv[6]), atoi(argv[7]), atoi(argv[8])),
    };
    Graph testGraph(nodes, edges);
    // EXPECT_EQ(edges, testGraph.getMST());
    os << testGraph.getMST().size();
    std::cout << os.str() << std::endl;
    return "success";
  }
  return "success";
}

std::string CLPApplication::help() {
  std::string help = "This program considers the integral";
  return help;
}

std::string CLPApplication::argument_error() {
  std::string error = "Invalid argument amount, try --help or -h commands";
  return error;
}
