#include <stdio.h>
#include <sys/types.h>

int main(void)
{
  printf("sizeof(blkcnt_t): %d\n", sizeof(blkcnt_t));
  printf("sizeof(blksize_t): %d\n", sizeof(blksize_t));
  printf("sizeof(clockid_t): %d\n", sizeof(clockid_t));
  printf("sizeof(dev_t): %d\n", sizeof(dev_t));
  printf("sizeof(fsblkcnt_t): %d\n", sizeof(fsblkcnt_t));
  printf("sizeof(fsfilcnt_t): %d\n", sizeof(fsfilcnt_t));
  printf("sizeof(gid_t): %d\n", sizeof(gid_t));
  printf("sizeof(id_t): %d\n", sizeof(id_t));
  printf("sizeof(ino_t): %d\n", sizeof(ino_t));
  printf("sizeof(key_t): %d\n", sizeof(key_t));
  printf("sizeof(mode_t): %d\n", sizeof(mode_t));
  printf("sizeof(nlink_t): %d\n", sizeof(nlink_t));
  printf("sizeof(off_t): %d\n", sizeof(off_t));
  printf("sizeof(pid_t): %d\n", sizeof(pid_t));
  printf("sizeof(ssize_t): %d\n", sizeof(ssize_t));
  printf("sizeof(suseconds_t): %d\n", sizeof(suseconds_t));
  printf("sizeof(uid_t): %d\n", sizeof(uid_t));
  return 0;
}
