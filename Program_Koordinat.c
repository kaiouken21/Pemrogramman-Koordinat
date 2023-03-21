#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Pendefinisian Varibale untuk titik x dan y
    int x,y;
    // Request input x dan menyimpan nilai yang dimasukan
    printf("Masukan titik x : ");
    scanf("%d", &x);
    // Request input y dan menyimpan nilai yang dimasukan
    printf("Masukan titik y : ");
    scanf("%d", &y);
    // Jika x lebih besar dari 0 dan y lebih besar dari 0
    if (x > 0 && y > 0)
    {
        // maka menampilkan kuadran 1
        printf("Titik koordinat (x,y) berada di kuadran 1 \n");
    }
    // Jika x lebih kecil dari 0 dan y lebih besar dari 0
    else if (x < 0 && y > 0)
    {
        // maka menampilkan kuadran 2
        printf("Titik koordinat (x,y) berada di kuadran 2 \n");
    }
    // Jika x lebih kecil dari 0 dan y lebih kecil dari 0
    else if (x < 0 && y < 0)
    {
        // maka menampilkan kuadran 3
        printf("Titik koordinat (x,y) berada di kuadran 3 \n");
    }
    // Jika x lebih besar dari 0 dan y lebih kecil dari 0
    else if (x > 0 && y < 0)
    {
        // maka menampilkan kuadran 4
        printf("Titik koordinat (x,y) berada di kuadran 4 \n");
    }
    return 0;
}

