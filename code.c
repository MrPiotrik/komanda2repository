#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int i, dimArray, A[dimArray]; 
    //i-індекс елементу масиву
    //A[i]-заданий масив
    printf("dimArray=");
    scanf("%i", &dimArray);
    srand(time(NULL));
    for (i = 0; i < dimArray; i++) {
    A[i] = 50-rand() % 100;
    }
    printf("Array:\n");
    for(i=0;i<dimArray;i++){
        printf("%i ", A[i]);
    }
    printf("\n");
    int sum=0, k=0, ind, saNeg;
    //sum-сума від'ємних елементів
    //k-кількість від'ємних елементів
    //saNeg-середнє арифметичне від'ємних елементів
    for(i=0;i<dimArray;i++){
        if(A[i]<0){
            sum+=A[i];
            k++;
        }
    }
    saNeg=sum/k;
    for(i=0;i<dimArray;i++){
        ind=0;
        if((i%2==0)&&(A[i]<0)){
            ind=i;
            A[ind]=saNeg;
        }
    }
    int suma=0, n=0, index, saPos;
    //suma-сума додатніх елементів
    //n-кі-сть додатніх елементів
    //saPos-середнє арифметичне додатніх елементів
    for(i=0;i<dimArray;i++){
        if(A[i]>0){
            suma+=A[i];
            n++;
        }
    }
    saPos=suma/n;
    for(i=0;i<dimArray;i++){
        index=0;
        if(i%2==1){
            index=i;
            A[index]=saPos;
        }
    }
    if(k==dimArray){
        for(i=0;i<dimArray;i++){
            A[i]=0;
        }
    }
    if(n==dimArray){
        for(i=0;i<dimArray;i++){
            A[i]=1;
        }
    }
    printf("Result:\n");
    for(i=0;i<dimArray;i++){
        printf("%i ", A[i]);
        }
return 0;
}
