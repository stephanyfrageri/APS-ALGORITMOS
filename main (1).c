#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    char dic,tam_palavra,palavra[25],letra[25],lacuna[25]="_";
    int vida=3,x,i,pontos=0;
    
    printf("VAMOS COMEÇAR O JOGO DA FORCA:\nVocê terá 3 vidas.\n");
    printf("\n\nDigite a palavra secreta:\n");
    gets(palavra);
    system("clear");
    printf("VAMOS COMEÇAR O JOGO DA FORCA:\nVocê terá 3 vidas.\n");
    
    for(i=0;i<strlen(palavra);i++)
        lacuna[i]='-';
        tam_palavra=strlen(palavra);

    while(vida>0){
        x=0;
        printf("\n %s \n",lacuna);
        printf("\n Digite uma letra: ");
        gets(letra);
        
    for(i=0;i<strlen(palavra);i++){
        if(letra[0]==palavra[i]){
            lacuna[i]=palavra[i];
            pontos++;
            x++;
        }
    }
    if(x==0){
        vida=vida-1;

    if(vida==0) {
        printf("\n\n VOCE FOI ENFORCADO!");
        printf("\n A PALAVRA ERA: %s",palavra);
    break;
    }

    else
        printf("\n VOCE ERROU! RESTAM %d VIDA(S)",vida);
    }

    else{
        if(pontos==tam_palavra){
            printf("\n\n VOCE GANHOU!");
            printf("\n A PALAVRA ERA: %s",palavra);
    break;
        }

    else{
        printf("\n VOCE ACERTOU UMA LETRA!");
    }
    }
    } 
        printf("\n\n");
return 0; 
}