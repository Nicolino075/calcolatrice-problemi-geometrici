//scrittura di un programma che calcola tutte le formule geometriche con selezione

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define P 3.14159
int main(int argc, const char * argb[]) {

int A; //variabile per la selezione del numero dell elenco
int B;//variabile per la selezione dell numero della formula inversa
int C;//selezine formula inversa triangolo
int D;//selezione elenco formule rettangolo
float lato1; //lato per quadrato e triangolo
float lato2; //lato per figure senza lati uguali
float altezza; //variabela dell altezza
float perimetro; //conterra il risultato dell perimetro
float area; //conterra il risultato dell area
float base; //conterra il risultato della base

do{
    printf("Per eseguire le formule del quadrato:1\n"); 
    printf("Per eseguire le forumule del triangolo:2\n");
    printf("Per eseguire le formule del rettangolo:3\n");
    printf("Per visualizzare le formule inverse:4\n");
    printf("\ninserisci un numero dell elenco per sciegliere le formule:\n");
    scanf("%d",&A);

    
}while(A>4);


if(A==1){ //condizione in cui se selezionato 1 chiedera il lato per poter applicare le formule
    
printf("inserisci il lato e riceverai i risultati delle formule del quadrato:\n");
scanf("%f",&lato1);

perimetro = lato1+lato1+lato1+lato1; //formula perimetro

printf("il perimetro è:%.2f\n", perimetro); //restituzione valore perimetro

area = lato1*lato1; //formula area

printf("l'area è:%.2f\n",area); //restituzione valore area
exit(1);    //uscita dal programma dopo risultato
}

if(A==2){
    
printf("inserisci il lato del triangolo:\n"); //inserimento lato
scanf("%f",&lato1);

printf("inserisci l'altezza del triangolo:\n"); //inserimento altezza
scanf("%f",&altezza);

perimetro = lato1+lato1+lato1;

printf("il perimetro del triangolo è:%.2f\n",perimetro);//restituzione valore perimetro del triangolo

area = (lato1*altezza)/2;

printf("l'area del triangolo è:%.2f\n",area); //restituzione valore area del triangolo
    
}    

if(A==3){    
    printf("inserisci la base del rettangolo:\n"); //inserimento base del rettangolo
    scanf("%f",&lato1);
    
    printf("inserisci l' altezza del rettangolo:\n");
    scanf("%f",&altezza);
    
    perimetro = (lato1*2)+(altezza*2);
    
    printf("il perimetro del rettangolo è:\n%.2f",perimetro); //restituzione perimetro del rettangolo
    
    area = lato1*altezza;
    
    printf("\nl'area del triangolo è\n%.2f",area); //restituzione valore area del rettangolo
    
}

  do{  //elenco formule inverse

   printf("Formule inverse triangolo:3\n"); //selezione formula inversa triangolo
   printf("Formule invese rettangolo:4"); //selezione formula inversa triangolo
   printf("\ninserire il numero dell elenco per sciegliere le formule inverse:\n");
   scanf("%d",&B); //rilevamento numero dell selezione dell elenco formule inverse 


}while(B>6);

    printf("formula per ottenere la base:5\n");  //formula inversa base del triangolo
    printf("formula per ottenere l'altezza:6\n"); //formula inversa altezza del tiangolo
    printf("inserire un numero dell elenco per sciegliere le formule\n");
    scanf("%d",&C); //salvataggio opzione nella variabile

if(C==5){
    
    printf("Inserisci l'area:\n"); //inserimento area del triangolo
    scanf("%f",&area);
    printf("inserisci l' altezza:\n"); //inserimento altezza del triangolo
    scanf("%f",&altezza);

    base = (area*2)/altezza; //formula inversa base del triangolo
    
    printf("la base è:\n%.2f",base); //restituzione valore area
}

if(C==6){

    printf("Inserisci l' area\n"); //inserimento valore area triangolo
    scanf("%f",&area);
    printf("inserisci la base\n"); //inserimento valore base triangolo
    scanf("%f",&base);
    
    altezza = (area*2)/base;
    
    printf("l'altezza è:\n%.2f",altezza); //restituzione valorea area triangolo
}

}
