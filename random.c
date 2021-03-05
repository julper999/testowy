#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float randomNum(int p, int k, int prec){
        //srand(time(NULL));
        int prec2 = 1;
        for(int i = 0; i < prec; i++){
                prec2 *= 10;
        }
        return ((rand() % ((k - p) * prec2)) / (float)prec2) + p;
}
//od do precyzja
int main(){
        srand(time(NULL));
        for(int i = 0; i < 20; i++){
                float randNumber = randomNum(9, 10, 2);
                printf("%f\n", randNumber);
        }
        return 0;
}

