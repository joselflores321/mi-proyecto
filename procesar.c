#include <studio.h>
#include<time>

int main(){
    srand(time(NULL));
    int numero[3][3];

    for(int x = 0; x<3;i++){
        for(int y=0; y<3; y++){
            numero[i][j]=rand()%100;
        }

    }

    for(int i=0; i<3; i++){
       for(int j=0; j<3; j++ ){
            printf("%d", numero[i][j]);
        } 
    printf("\n");
    } 
return 0;
} 