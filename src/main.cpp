/*
  The main function of JAGS
 */
#include <string>

using namespace std;

#include "option.hpp"

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
  // parse a graph
  string model = opt.get_string("--model");
  
  return 0;
}
