#include <stdio.h>
#include <stdlib.h>

int main() {
    float media1, mediaf;
    system("title CalcNF - Por Diemousine");

    while(1>0) {
    system("cls");
    printf("Obs: use . e nao ,\n\nDigite sua media: ");
    scanf("%f",&media1);

    if (media1>=7) { 
       printf("Voce nao precisa fazer prova final.\n\n");
       } else {
              mediaf = ((1-((media1*0.7)/5))*5)/0.3;
              if(mediaf>10) {
                            printf("Nao tem santo no mundo que faca voce passar na final!\n\n");
              } else {
                   printf("Voce precisa tirar %f para passar na Prova Final.\n\n",mediaf);
                   }
              }
    system("Pause");
}
    return 0;
}
