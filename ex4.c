#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, num, heads=0,trails=0;

  char str[8];
  printf("あんた誰？");
  scanf("%s", str);
  printf("ハロー、%s\n",str);

  printf("Tossing a coin...\n");

  for (i=0;i<3;i++){
    num = rand();
    if(num%2==0){
      printf("Round %d: Head\n", i+1);
      heads++;
    }
    else{
      printf("Round %d: Tral\n", i+1);
      trails++;
    }
  }
  if(heads>trails){
  printf("%s won\n",str);
  }
  else{
    printf("%s lose\n",str);
  }
  printf("Heads: %d, Trails: %d\n", heads,trails);

  return 0;
}
