#include <stdio.h>
#include <string.h>


struct Person {
  char name[50];
  char lastname[50];
  int birthyear;

} me ,opponent;

int main() {


  strcpy(me.name, "mona");
  strcpy(opponent.name, "Jack");
  strcpy(me.lastname, "Taji");
  strcpy(opponent.lastname, "Nilson");


  me.birthyear = 1974;
  opponent.birthyear = 1980;


  printf("Name: %s\n", me.name);
  printf("Birthday year.: %d\n",me.birthyear);
  printf("Name: %s\n", opponent.name);
  printf("Birthday Year: %d\n", opponent.birthyear);

  return 0;
}
