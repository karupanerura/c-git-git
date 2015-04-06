#include <unistd.h>

int main (int argc, char **argv) {
  if (argc == 0) execl("git", "git", NULL);

  int i = 1;
  char *args[255] = { "git" };
  for (; i < argc; i++) {
    args[i] = argv[i];
  }
  args[i] = NULL;
  execvp("git", args);

  return -1;
}
