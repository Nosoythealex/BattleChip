#include <stdio.h>
#include <unistd.h>
#include <windows.h>

void intro();
void menu();
void primermodo(int tablero[8][8]);
void segundomodo();
void salida();
void imprimirtablero(int tablero[8][8]);

int tablero[8][8] = {0};


int main()
{
    int selec;
    intro();
    menu();
    

    return 0;
}


void intro()
{
    int valida = 1;

    printf(" /$$$$$$$   /$$$$$$  /$$$$$$$$ /$$$$$$$$ /$$       /$$$$$$$$  /$$$$$$  /$$   /$$ /$$$$$$ /$$$$$$$\n");
    sleep(1);
    printf("| $$__  $$ /$$__  $$|__  $$__/|__  $$__/| $$      | $$_____/ /$$__  $$| $$  | $$|_  $$_/| $$__  $$\n");
    sleep(1);
    printf("| $$  \\ $$| $$  \\ $$   | $$      | $$   | $$      | $$      | $$  \\__/| $$  | $$  | $$  | $$  \\ $$\n");
    sleep(1);
    printf("| $$$$$$$ | $$$$$$$$   | $$      | $$   | $$      | $$$$$   |  $$$$$$ | $$$$$$$$  | $$  | $$$$$$$/\n");
    sleep(1);
    printf("| $$__  $$| $$__  $$   | $$      | $$   | $$      | $$__/    \\____  $$| $$__  $$  | $$  | $$____/ \n");
    sleep(1);
    printf("| $$  \\ $$| $$  | $$   | $$      | $$   | $$      | $$       /$$  \\ $$| $$  | $$  | $$  | $$      \n");
    sleep(1);
    printf("| $$$$$$$/| $$  | $$   | $$      | $$   | $$$$$$$$| $$$$$$$$|  $$$$$$/| $$  | $$ /$$$$$$| $$      \n");
    sleep(1);
    printf("|_______/ |__/  |__/   |__/      |__/   |________/|________/ \\______/ |__/  |__/|______/|__/      \n");
    printf ("\n\n");

    printf("Presione Enter Para Continuar...");
        
    getchar(); // espera a que se presione Enter
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    
}

void menu()
{
    int opcion;

    printf(" /$$$$$$$   /$$$$$$  /$$$$$$$$ /$$$$$$$$ /$$       /$$$$$$$$  /$$$$$$  /$$   /$$ /$$$$$$ /$$$$$$$\n");
    sleep(0);
    printf("| $$__  $$ /$$__  $$|__  $$__/|__  $$__/| $$      | $$_____/ /$$__  $$| $$  | $$|_  $$_/| $$__  $$\n");
    sleep(0);
    printf("| $$  \\ $$| $$  \\ $$   | $$      | $$   | $$      | $$      | $$  \\__/| $$  | $$  | $$  | $$  \\ $$\n");
    sleep(0);
    printf("| $$$$$$$ | $$$$$$$$   | $$      | $$   | $$      | $$$$$   |  $$$$$$ | $$$$$$$$  | $$  | $$$$$$$/\n");
    sleep(0);
    printf("| $$__  $$| $$__  $$   | $$      | $$   | $$      | $$__/    \\____  $$| $$__  $$  | $$  | $$____/ \n");
    sleep(0);
    printf("| $$  \\ $$| $$  | $$   | $$      | $$   | $$      | $$       /$$  \\ $$| $$  | $$  | $$  | $$      \n");
    sleep(0);
    printf("| $$$$$$$/| $$  | $$   | $$      | $$   | $$$$$$$$| $$$$$$$$|  $$$$$$/| $$  | $$ /$$$$$$| $$      \n");
    sleep(0);
    printf("|_______/ |__/  |__/   |__/      |__/   |________/|________/ \\______/ |__/  |__/|______/|__/      \n");
    printf("\n\n");

    printf("!!!Bienevnido a BattleShip!!!\n"); // te arroja el menu de inicio
    printf("\t1. 1 vs 1\n ");
    printf("\t2. 1 vs AI \n ");
    printf("\t3. Salir \n ");

        printf("\n Que arreglo desea ejecutar: ", opcion);
        scanf("%d", &opcion);

        switch (opcion) // Switch para las opciones del juego
        {
            case 1:
                primermodo(tablero);
            break;
            
            case 2:
                segundomodo();
            break;

            case 3:
                salida(); 
            break;

            default:
            break;
        } 
}

void primermodo(int tablero[8][8])
{

    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(" /$$$$$$$  /$$$$$$ /$$$$$$$$ /$$   /$$ /$$    /$$ /$$$$$$$$ /$$   /$$ /$$$$$$ /$$$$$$$   /$$$$$$ \n");
    printf("| $$__  $$|_  $$_/| $$_____/| $$$ | $$| $$   | $$| $$_____/| $$$ | $$|_  $$_/| $$__  $$ /$$__  $$\n");
    printf("| $$  \\ $$  | $$  | $$      | $$$$| $$| $$   | $$| $$      | $$$$| $$  | $$  | $$  \\ $$| $$  \\ $$\n");
    printf("| $$$$$$$   | $$  | $$$$$   | $$ $$ $$|  $$ / $$/| $$$$$   | $$ $$ $$  | $$  | $$  | $$| $$  | $$\n");
    printf("| $$__  $$  | $$  | $$__/   | $$  $$$$ \\  $$ $$/ | $$__/   | $$  $$$$  | $$  | $$  | $$| $$  | $$\n");
    printf("| $$  \\ $$  | $$  | $$      | $$\\  $$$  \\  $$$/  | $$      | $$\\  $$$  | $$  | $$  | $$| $$  | $$\n");
    printf("| $$$$$$$/ /$$$$$$| $$$$$$$$| $$ \\  $$   \\  $/   | $$$$$$$$| $$ \\  $$ /$$$$$$| $$$$$$$/|  $$$$$$/\n");
    printf("|_______/ |______/|________/|__/  \\__/    \\_/    |________/|__/  \\__/|______/|_______/  \\______/ \n\n\n");

    printf("|...BIENVENIDO A BATTLE SHIP...|\n\n ESTE ES TU TABLERO\n\n");


    imprimirtablero(tablero);
    
}

void imprimirtablero(int tablero[8][8])
{
    int i, j;

     // Inicializamos el tablero con '0'.
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++) 
        {
            tablero[i][j] = '*';
        }
    }
    
    // Agregamos las etiquetas de columna.
    tablero[0][0] = ' ';
    for (i = 1; i <= 7; i++)
    {
        tablero[0][i] = '1' + i - 1;
    }
    
    // Agregamos las etiquetas de fila.
    for (i = 1; i <= 7; i++) 
    {
        tablero[i][0] = '@' + i;
    }
    
    // Imprimimos el tablero
    for (i = 0; i <= 7; i++) 
    {
        for (j = 0; j <=7 ; j++) 
        {
            printf("%c ", tablero[i][j]);
        }
        printf("\n"); //salto de linea para que el tablero no este en una misma linea.
    }



}

void segundomodo()
{
    printf("jugando contra AI mamahuevooooooooooooooooooooooos");
}
    

void salida()
{
    for(int i = 0; i < 4; i++)
    {
        Sleep(500); // espera 500 milisegundos
        printf("\r"); // se pone al principio de la linea
        printf("\n\n\n\n\n\n\n\n\n");
        printf("  /$$$$$$   /$$$$$$  /$$       /$$$$$$  /$$$$$$  /$$$$$$$$ /$$$$$$$$\n");
        printf(" /$$__  $$ /$$__  $$| $$      |_  $$_/ /$$__  $$|__  $$__/| $$_____/\n");
        printf("| $$  \\__/| $$  \\ $$| $$        | $$  | $$  \\__/   | $$   | $$      \n");
        printf("|  $$$$$$ | $$$$$$$$| $$        | $$  |  $$$$$$    | $$   | $$$$$   \n");
        printf(" \\____  $$| $$__  $$| $$        | $$   \\____  $$   | $$   | $$__/   \n");
        printf(" /$$  \\ $$| $$  | $$| $$        | $$   /$$  \\ $$   | $$   | $$      \n");
        printf("|  $$$$$$/| $$  | $$| $$$$$$$$ /$$$$$$|  $$$$$$/   | $$   | $$$$$$$$\n");
        printf(" \\______/ |__/  |__/|________/|______/ \\______/    |__/   |________/\n");
        Sleep(500); // espera 500 milisegundos
        printf("\r"); // vuelve al inicio para volver a escribir
        printf("                         "); // vuelve a escribir el mensaje en el espacio en blanco
        printf("                         ");
        printf("                         ");
        printf("                         ");
        printf("                         "); 
        printf("                         ");
        printf("                         ");
        printf("                         ");
        printf("                         ");

    }    
        
}