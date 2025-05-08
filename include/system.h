#ifndef SYSTEM_H
#define SYSTEM_H

#include <string>
#include <vector>

#include "all_processes.h"
#include "process.h"
#include "processor.h"

class System {
 public:
  Processor& Cpu();
  All_Processes& Processes();
  float MemoryUtilization();
  long UpTime();
  int TotalProcesses();
  int RunningProcesses();
  std::string Kernel();
  std::string OperatingSystem();

  // TODO: Define any necessary private members
 private:
  Processor cpu_;
  All_Processes processes_;
};

#endif