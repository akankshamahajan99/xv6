#include "types.h"
#include "stat.h"
#include "user.h"


int
main(int argc, char *argv[])
{
  int before = 0, after, pid;
  pid = fork();
  before = uptime();
  if(pid == 0) {
  	time(argc, argv);
  	exit();
  }
  else {
     wait();
     after = uptime();
  }
  printf(1, "\nTime taken for execution of %s is %d %d-%d\n", argv[1], after - before, after, before);
  exit();
  return 0;
}
