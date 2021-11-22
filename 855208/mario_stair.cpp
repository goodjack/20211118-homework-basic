#include <cstdio>
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int a = 0;
  printf("What's your stair's height: ");
  scanf("%d", &a);

  for (int i = 0; i < a + 1; i++) 
 {
    for(int n = 0; n < a - i; n++) 
 {
        printf(" ");
      }
    
    for (int z = 0; z < 2; z++) {
      for(int n = 0; n < i; n++) {
        printf("*");
      }
      printf("  ");
    }

    printf("\n");
  }
	return 0;
}
