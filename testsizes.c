#include <stdio.h>
#include <sys/types.h>

int main(void)
{
  printf("sizeof(blkcnt_t): %lu\n", sizeof(blkcnt_t));
  printf("sizeof(blksize_t): %lu\n", sizeof(blksize_t));
  printf("sizeof(dev_t): %lu\n", sizeof(dev_t));
  printf("sizeof(fsblkcnt_t): %lu\n", sizeof(fsblkcnt_t));
  printf("sizeof(fsfilcnt_t): %lu\n", sizeof(fsfilcnt_t));
  printf("sizeof(gid_t): %lu\n", sizeof(gid_t));
  printf("sizeof(id_t): %lu\n", sizeof(id_t));
  printf("sizeof(ino_t): %lu\n", sizeof(ino_t));
  printf("sizeof(key_t): %lu\n", sizeof(key_t));
  printf("sizeof(mode_t): %lu\n", sizeof(mode_t));
  printf("sizeof(nlink_t): %lu\n", sizeof(nlink_t));
  printf("sizeof(off_t): %lu\n", sizeof(off_t));
  printf("sizeof(pid_t): %lu\n", sizeof(pid_t));
  printf("sizeof(ssize_t): %lu\n", sizeof(ssize_t));
  printf("sizeof(suseconds_t): %lu\n", sizeof(suseconds_t));
  printf("sizeof(uid_t): %lu\n", sizeof(uid_t));
  return 0;
}
