#include <cstdio>

#include "List.h"

int main(int argc, char *argv[]) {
  List<int> toto;
  printf("toto capacity : %d\n", toto.Count());

  toto.Add(19);
  toto.Add(122);
  printf("toto capacity : %d\n", toto.Count());
  for (int i = 0; i < toto.Count(); i++) {
    printf("toto[%d] = %d\n", i, toto[i]);
  }

  toto.Remove(19);
  printf("toto capacity : %d\n", toto.Count());
  for (int i = 0; i < toto.Count(); i++) {
    printf("toto[%d] = %d\n", i, toto[i]);
  }

  toto.Clear();
  printf("toto capacity : %d\n", toto.Count());

  return 0;
}
