#include "types.h"
#include "fcntl.h"
#include "user.h"

//test file for lseek
int
main(int argc, char *argv[])
{
  int fd, testpassed;
  testpassed = 1;
  fd = open("test_file", O_CREATE | O_RDWR);
  if(lseek(fd, 2, SEEK_CUR) == 0)
    printf(fd, "testing abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ lseek(fd, 2, SEEK_CUR);");
  else
  	testpassed = 0;
  if(lseek(fd, 5, SEEK_END) == 0)
    printf(fd, "testing wxyz lseek(fd, 5, SEEK_END);");
  else
  	testpassed = 0;
  if(lseek(fd, 5, SEEK_SET) == 0)
    printf(fd, "TESTING PQRS lseek(fd, 5, SEEK_SET);");
  else
  	testpassed = 0;
  close(fd);
  if(testpassed == 1)
    printf(1, "lseek test successful\n");
  exit();
  return 0;
}