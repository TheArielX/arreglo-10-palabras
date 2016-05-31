#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
int n, x, licount=0;

    printf("Bienvenido al juego del numero secreto\nPresione cualquier tecla para comenzar\n");
        srand(time(NULL));
        n = (1+rand()%100);
            printf("%d\n", n);

            do {
                (x>=0 && x<=100);

                 printf("Se ha generado el numero secreto\nIntroduzca el numero que cree que se genero:");
            scanf("%d", &x);
            licount++;
                    if (n-x==1 || n-x==2 || n-x==3 || n-x==4 || n-x==5 || n-x>=-5*-1<=5) {
                        printf("Esta caliente\n");
                        }
                    else if (n-x>=5) {
                        printf("Esta frio\n");
                    }
                    else if (n-x==0) {
                        printf("Ganasate!!!\n");
                    }
            }
            while(n!=x);
            printf("La cantidad de intentos fue %d", licount);
            }
