#ifndef ALL_PROCESSES_H
#define ALL_PROCESSES_H

#include <string>
#include <vector>

#include "process.h"

using std::string;
using std::vector;

class All_Processes {
 private:
  long Hertz;
  vector<int> current_pids_;
  vector<Process> all_processes_;

  void UpdateProcesses();
  void AddNewProcesses(bool&);
  vector<int> ReadFolders();
  void RemoveFinishedProcesses(bool&);

 public:
  All_Processes();
  vector<Process>& GetProcesses();
};

#endif