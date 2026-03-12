#include <stdio.h>

int main() {
    
int tabu [10] [10] = {0};
char colunas [10] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 'J'};

for(int i = 3; i < 6; i++) {
      
        tabu [i] [2] = 3;    
}

for(int i = 5; i <= 7; i++) {
      
        tabu [8] [i] = 3;    
}

for(int i = 9; i > 6; i--) {
   for(int j = 0; j < 3; j++) {

   tabu [j] [i] = 3; 


   }
}

printf("     ");
  
for (int i = 0; i <= 9  ; i++) {

printf(" %c " , colunas [i]);

}

printf("\n");

for(int i = 0; i < 10; i++) {
    
    printf("\n");
    printf("%2d | " , i+1);

    for(int j = 0 ; j < 10; j++) {

        printf(" %d " , tabu [j] [i]);
    }
  
}
    printf("\n\n");

    return 0;
}