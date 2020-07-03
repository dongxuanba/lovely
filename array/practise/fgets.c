/*#include <stdio.h>
#include <string.h>

int main(void) {
    char buffer[256];

    printf("Enter your name and press enter:\n");
    fgets(buffer);

    printf("Your name has %d characters and spaces!", strlen(buffer));

    return 0;
}*/
#include <stdio.h>
#include <string.h>

int main(void) {
  char buffer[256];
  printf("Enter your name and press enter:\n");
  // fgets(buffer);
  if (fgets(buffer, sizeof buffer, stdin) != NULL) {

    // Remove potential \n
    buffer[strcspn(buffer, "\n")] = 0;

    // printf("Your name has %d ...
    printf("Your name has %zu characters and spaces!\n", strlen(buffer));
  }
  return 0;
}