#include <stdio.h>

int main() {
    
int tabu [10] [10] = {0};
int cone [3] [5] = {0};
int cruz [3] [5] = {0};
int losan [3] [5] = {0};
char colunas [10] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G' , 'H' , 'I' , 'J'};
int saida = 0;
int saida1 = 0;
int saida2 = 0;



// Tabuleiro cone

for(int i = 0 ; i <= 4 ; i++ ) {
   
cone [2][i] = 1;

}

for(int i = 1 ; i <= 3 ; i++ ) {
   
cone [1][i] = 1;

}

for(int i = 0; i < 3; i++) {
   for(int j = 0; j < 5; j++) {
      if(cone [0][2] == 0) {

      cone [0][2] = 1;
      saida++;
      break;   
      }
   }

   if(saida) break;
}       

for(int i = 0; i < 3; i++) {
   for(int j = 0; j < 5; j++) {

    printf(" %d " , cone [i][j]);

   }

 printf("\n");

}
   printf("\n");



   // Tabuleiro cruz

for(int i = 0 ; i <= 4 ; i++ ) {
   
 cruz [1][i] = 1;

 }
 
  for(int i = 0; i < 3; i++) {
   for(int j = 0; j < 5; j++) {
      if(cruz [0][2] == 0 && cruz [2][2] == 0) {

      cruz [0][2] = 1;
      cruz [2][2] = 1;
      saida2++;
      break;   
      }
   }

   if(saida2) break;
}       

   for(int i = 0; i < 3; i++) {
   for(int j = 0; j < 5; j++) {

    printf(" %d " , cruz [i][j]);

   }

 printf("\n");

}
   printf("\n");



   // Tabuleiro losangulo

   for(int i = 1 ; i <= 3 ; i++ ) {
   
 losan [1][i] = 1;

 }
 
  for(int i = 0; i < 3; i++) {
   for(int j = 0; j < 5; j++) {
      if(losan [0][2] == 0 && losan [2][2] == 0) {

      losan [0][2] = 1;
      losan [2][2] = 1;
      saida1++;
      break;   
      }
   }

   if(saida1) break;
}       
  

   for(int i = 0; i < 3; i++) {
   for(int j = 0; j < 5; j++) {

    printf(" %d " , losan [i][j]);

   }

 printf("\n");

}
   printf("\n");


// Logica para posicoes no Tabuleiro 1 

for(int i = 3; i < 8; i++) {
      
        tabu [i] [2] = 3;    
}

for(int i = 5; i <= 7; i++) {
      
        tabu [8] [i] = 3;    
}

for(int i = 0 , j = 2; j >= 0 && i < 3; i++ ,j--) {
    tabu[j][i] = 3;
}

for(int i = 4 , j = 2; j <= 5 && i <= 7; i++ ,j++) {
    tabu[j][i] = 3;
}
// logica para as letras nas colunas

printf("     ");
  
for (int i = 0; i <= 9  ; i++) {

printf(" %c " , colunas [i]);

}

printf("\n");

// Logica para numeros nas linhas , e exibiçao do Tabuleiro

for(int i = 0; i < 3; i++) {
   for(int j = 0; j < 5; j++) {

    tabu [0 + i] [0 + j] = cone [i] [j];

   }
}

for(int i = 0; i < 3; i++) {
   for(int j = 0; j < 5; j++) {

    tabu [7 + i] [0 + j] = cruz [i] [j];

   }
}

for(int i = 0; i < 3; i++) {
   for(int j = 0; j < 5; j++) {

    tabu [3 + i] [5 + j] = losan [i] [j];

   }
}

for(int i = 0; i < 10; i++) {
    
    printf("\n");
    printf("%2d | " , i+1);

    for(int j = 0 ; j < 10; j++) {

        printf(" %d " , tabu [i] [j]);
     
    }
}
    printf("\n\n");

    return 0;
}