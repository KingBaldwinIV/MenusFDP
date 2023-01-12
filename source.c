#include <stdio.h>

int main()
{
    FILE *mv1;
    FILE *mv2;
    FILE *mv3;
    FILE *mv4;
    FILE *mv5;
    FILE *mv6;
    FILE *mv7;
    FILE *mca1;
    FILE *mca2;
    FILE *mca3;
    FILE *mca4;
    FILE *mca5;
    FILE *mca6;
    FILE *mca7;
    char carac;

    int i=0;
	int x,y;
    do
    {
        printf ("Menu de comidas\n");
        printf ("Seleccione alguna\n");
        printf ("1 Vegetariano\n");
        printf ("2 Contenido Animal\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf ("Seleccione un dia de la semana\n");
            char mat[7][100]={"Lunes\n", "Martes\n", "Miercoles\n", "Jueves\n", "Viernes\n", "Sabado\n", "Domingo\n"};
for(i=0;i<7;i++)
printf ("%s",&mat[i]);
            scanf("%d",&y);
            switch(y)
            {
                case 1:
                printf ("Lunes\n");
mv1=fopen("mvl.txt","r");
if(mv1==NULL){
 printf("Error, intente de nuevo\n");
}
else{
    printf("Bienvenido, el menu del dia de hoy es:\n");
     while(feof(mv1)==0){
        carac=fgetc(mv1);
        printf("%c",carac);
     }
}
fclose(mv1);
                break;
                case 2:
                printf ("Martes\n");
                mv2=fopen("mvms.txt","r");
if(mv2==NULL){
 printf("Error, intente de nuevo\n");
}
else{
    printf("Bienvenido, el menu del dia de hoy es:\n");
     while(feof(mv2)==0){
        carac=fgetc(mv2);
        printf("%c",carac);
     }
}
fclose(mv2);
                break;
                case 3:
                printf("Miercoles\n");
                mv3=fopen("mvmls.txt","r");
if(mv3==NULL){
 printf("Error, intente de nuevo\n");
}
else{
    printf("Bienvenido, el menu del dia de hoy es:\n");
     while(feof(mv3)==0){
        carac=fgetc(mv3);
        printf("%c",carac);
     }
}
fclose(mv3);
                break;
                case 4:
                printf("Jueves\n");
                mv4=fopen("mvj.txt","r");
if(mv4==NULL){
 printf("Error, intente de nuevo\n");
}
else{
    printf("Bienvenido, el menu del dia de hoy es:\n");
     while(feof(mv4)==0){
        carac=fgetc(mv4);
        printf("%c",carac);
     }
}
fclose(mv4);
                break;
                case 5:
                printf("Viernes\n");
                mv5=fopen("mvv.txt","r");
if(mv5==NULL){
 printf("Error, intente de nuevo\n");
}
else{
    printf("Bienvenido, el menu del dia de hoy es:\n");
     while(feof(mv5)==0){
        carac=fgetc(mv5);
        printf("%c",carac);
     }
}
fclose(mv5);
                break;
                case 6:
                printf("Sabado\n");
                mv6=fopen("mvs.txt","r");
if(mv6==NULL){
 printf("Error, intente de nuevo\n");
}
else{
    printf("Bienvenido, el menu del dia de hoy es:\n");
     while(feof(mv6)==0){
        carac=fgetc(mv6);
        printf("%c",carac);
     }
}
fclose(mv6);
                break;
                case 7:
                printf("Domingo\n");
                mv7=fopen("mvd.txt","r");
if(mv7==NULL){
 printf("Error, intente de nuevo\n");
}
else{
    printf("Bienvenido, el menu del dia de hoy es:\n");
     while(feof(mv7)==0){
        carac=fgetc(mv7);
        printf("%c",carac);
     }
}
fclose(mv7);
        
                break;
            }
            case 2:
            printf ("Seleccione un dia de la semana\n");
            char matx[7][100]={"Lunes\n", "Martes\n", "Miercoles\n", "Jueves\n", "Viernes\n", "Sabado\n", "Domingo\n"};
            for(i=0;i<7;i++)
printf ("%s",&matx[i]);
            scanf("%d",&y);
           
            switch(y)
            {
                case 1:
                printf ("Lunes\n");
                mca1=fopen("mcal.txt","r");
if(mca1==NULL){
 printf("Error, intente de nuevo\n");
}
else{
    printf("Bienvenido, el menu del dia de hoy es:\n");
     while(feof(mca1)==0){
        carac=fgetc(mca1);
        printf("%c",carac);
     }
}
fclose(mca1);
                break;
                case 2:
                printf ("Martes\n");
                mca2=fopen("mcams.txt","r");
if(mca2==NULL){
 printf("Error, intente de nuevo\n");
}
else{
    printf("Bienvenido, el menu del dia de hoy es:\n");
     while(feof(mca2)==0){
        carac=fgetc(mca2);
        printf("%c",carac);
     }
}
fclose(mca2);
                break;
                case 3:
                printf("Miercoles\n");
                mca3=fopen("mcamls.txt","r");
if(mca3==NULL){
 printf("Error, intente de nuevo\n");
}
else{
    printf("Bienvenido, el menu del dia de hoy es:\n");
     while(feof(mca3)==0){
        carac=fgetc(mca3);
        printf("%c",carac);
     }
}
fclose(mca3);
                break;
                case 4:
                printf("Jueves\n");
                mca4=fopen("mcaj.txt","r");
if(mca4==NULL){
 printf("Error, intente de nuevo\n");
}
else{
    printf("Bienvenido, el menu del dia de hoy es:\n");
     while(feof(mca4)==0){
        carac=fgetc(mca4);
        printf("%c",carac);
     }
}
fclose(mca4);
                break;
                case 5:
                printf("Viernes\n");
                mca5=fopen("mcav.txt","r");
if(mca5==NULL){
 printf("Error, intente de nuevo\n");
}
else{
    printf("Bienvenido, el menu del dia de hoy es:\n");
     while(feof(mca5)==0){
        carac=fgetc(mca5);
        printf("%c",carac);
     }
}
fclose(mca5);
                break;
                case 6:
                printf("Sabado\n");
                mca6=fopen("mcas.txt","r");
if(mca6==NULL){
 printf("Error, intente de nuevo\n");
}
else{
    printf("Bienvenido, el menu del dia de hoy es:\n");
     while(feof(mca6)==0){
        carac=fgetc(mca6);
        printf("%c",carac);
     }
}
fclose(mca6);
                break;
                case 7:
                printf("Domingo\n");
                mca7=fopen("mcad.txt","r");
if(mca7==NULL){
 printf("Error, intente de nuevo\n");
}
else{
    printf("Bienvenido, el menu del dia de hoy es:\n");
     while(feof(mca7)==0){
        carac=fgetc(mca7);
        printf("%c",carac);
     }
}
fclose(mca7);
                break;
            }
        }
        
        
        
    }
while(x>3);}
    
