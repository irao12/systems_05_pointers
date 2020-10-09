#include <stdio.h>

int main(){
  //part 1
  char x = 'g';
  int y = 20;
  long z = 8888888;

  printf("char x = %c\n", x);
  printf("int y = %d\n", y);
  printf("long z = %ld\n\n", z);
  //part 2
  printf("Address of x = %p or %x\n", &x,&x);
  printf("Address of y = %p or %x\n", &y,&y);
  printf("Address of z = %p or %x\n\n", &z,&z);
  //part 3
  char *xp = &x;
  int *yp = &y;
  long *zp = &z;
  //part 4
  printf("xp = %p\n",xp);
  printf("yp = %p\n",yp);
  printf("zp = %p\n\n",zp);
  //part 5
  *xp = '!';
  *yp = 1000;
  *zp = 10233000;
  printf("new x = %c\n", x);
  printf("new y = %d\n", y);
  printf("new z = %ld\n\n", z);
  //part 6
  unsigned int ui = 423688;
  int * uipi = &ui;
  char * uipc = &ui;
  //part 7
  printf("uipi: %p uipi points to: %u\n",uipi,*uipi);
  printf("uipc: %p uipc points to: %u\n\n",uipc,*uipc);
  //part 8
  printf("unsigned int as a hexadecimal: %x\n", ui);
  printf("unsigned int as a decimal: %u\n\n", ui);
  //part 9
  printf("Bytes in decimal\n");
  int i;
  for(i = 0; i < sizeof(ui); i++){
       printf("Byte #%d: %hhu \n", i,*(uipc+i));
  }
  printf("Bytes in hexadecimal\n");
  for(i = 0; i < sizeof(ui); i++){
       printf("Byte #%d: %hhx\n", i,*(uipc+i));
  }
  //part 10
  for (i = 0; i <sizeof(ui); i++){
    (*(uipc+i))+=1;
  }
  printf("\nAfter adding one to each byte\n");
  printf("unsigned int: %u\n", ui);
  printf("Bytes in decimal\n");
  for (i = 0; i <sizeof(ui); i++){
      printf("Byte #%d: %hhu\n",i,(*(uipc+i)));
  }
  printf("Bytes in hexadecimal\n");
  for (i = 0; i < sizeof(ui); i++){
      printf("Byte#%d: %hhx\n", i, *(uipc+i));
  }
  //part 11

  ui = 432125;
  for (i = 0; i <sizeof(ui); i++){
      printf("Byte #%d: %hhu\n",i,(*(uipc+i)));
  }
  for (i = 0; i <sizeof(ui); i++){
    (*(uipc+i))+=16;
  }
  printf("\nAfter adding sixteen to each byte\n");
  printf("unsigned int: %u\n", ui);
  printf("Bytes in decimal\n");
  for (i = 0; i <sizeof(ui); i++){
      printf("Byte #%d: %hhu\n",i,(*(uipc+i)));
  }
  printf("Bytes in hexadecimal\n");
  for (i = 0; i < sizeof(ui); i++){
      printf("Byte #%d: %hhx\n", i, *(uipc+i));
  }
  return 0;
}
