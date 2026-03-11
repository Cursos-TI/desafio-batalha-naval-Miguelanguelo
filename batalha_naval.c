#include <stdio.h>

int main() {
    
int tabu [10] [10] = {0};
char colunas [10] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 'J'};

printf("     ");
  
for (int i = 0; i <= 9  ; i++) {

printf(" %c " , colunas [i]);

}

printf("\n");

for(int i = 0 , h = 1; i <= 10 && h <= 10; i++ , h++) {
    
    printf("\n");
    printf("%2d | " , h);

    for(int j = 0 ; j < 10; j++) {

        printf(" %d " , tabu [j] [i]);
    }
  
}
    printf("\n\n");

    return 0;
}