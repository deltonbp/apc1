#include <stdio.h>
int main(){

  printf("%s\n", "===============================");
  printf("\t%s\n", "  N O T A  L E G A L");
  printf("%s\n", "===============================");
  printf("%s\t\t %s\t %s\n", "Produto", "QTD", "Valor Unit");
  printf("%s\t %.3i\t\t  %.2f\n", "Camiseta", 2, 39.99);
  printf("%s\t\t %.3i\t\t  %.2f\n", "Calca", 1, 89.90);
  printf("%s\t %.3i\t\t  %.2f\n", "Meia Social", 3, 19.99);
  printf("%s\n", "===============================");
  printf("%s\t\t\t\t\t %.2f\n\n\n\n", "Total:", 229.85);


  printf("%s\n", "===============================");
  printf("\t%s\n", "  N O T A  L E G A L");
  printf("%s\n", "===============================");
  printf("%.
    11s %8.3s %14.10s\n", "Produto", "QTD", "Valor Unit");
  printf("%.11s %7.3i %14.2f\n", "Camiseta", 2, 39.99);
  printf("%.11s %10.3i %14.2f\n", "Calca", 1, 89.90);
  printf("%.11s %4.3i %14.2f\n", "Meia Social", 3, 19.99);
  printf("%s\n", "===============================");
  printf("%25s%.2f\n", "Total:", 229.85);
return 0;
}