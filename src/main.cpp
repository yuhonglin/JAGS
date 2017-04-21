/*
  The main function of JAGS
 */
#include <string>
#include <memory>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <sstream>

using namespace std;

#include "logger.hpp"
#include "option.hpp"

using namespace jags::util;

#include "compiler/parser_extra.h"
#include "compiler/ParseTree.h"


int main(int argc, char *argv[])
{
  // parse option
  jags::util::Option opt;
  opt.set_head("This is the JAGS modified by Honglin\n");
  opt.add_int("--model", "path to the model file");
  opt.add_bool("--help", "show help information", false);
  opt.parse(argc, argv, true);
  if (opt.get_bool("--help")) {
    opt.dump_help();
    return 0;
  }  
  
  // First step
  // parse a model file
  string model = opt.get_string("--model");

  vector<jags::ParseTree*> * pvariables = 0;
  jags::ParseTree * pdata = 0;
  jags::ParseTree * prelations = 0;
  std::string message;

  FILE* mf = std::fopen(model.c_str(), "r");
  
  int status = parse_bugs(mf, pvariables, pdata, prelations, message);

  if (status != 0) {
    stringstream ss;
    ss << "Error parsing model file: " << message;
    LOG_ERROR(ss.str());
  }

  return 0;
}
