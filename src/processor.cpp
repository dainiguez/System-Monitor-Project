#include "processor.h"
#include "linux_parser.h"
#include <vector>
#include <string>
using std::vector;
using std::string;
using LinuxParser::CPUStates;

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() {
  long total = LinuxParser::Jiffies();
  long active = LinuxParser::ActiveJiffies();
  return active * (1.f / total);
}