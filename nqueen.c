/* SOLVED */
#include <stdio.h>

#define MAX 10

int N;
int count=0;
int placed[MAX];

void display(){
    for(int m=0;m<N;m++){
        for (int p=0;p<N;p++){
            if (p==placed[m]) printf("Q ");
            else printf("- ");
        }
        printf("\n");
    }
    printf("----------------\n");
}

int isDiagonal(int i1, int i2, int j1, int j2){
    // checks if in diagonal position
    float d;
    d= (float)(j2-j1)/(i2-i1);
    if (d==1.0 || d==-1.0) return 1;
    return 0;
}

int place(int k, int j){
    // returns true if queen can be placed in (k,j)
    //else returns false
    int i=0;
    while (i<k) {
        if (placed[i]==j || isDiagonal(k,i,j,placed[i])==1 ) {
            return 0; 
        }
        i++;
    }
    return 1;
}

void Nqueen(int k){
    for (int j=0;j<N;j++){
        if (place(k,j)) {
            placed[k]=j;
            if (k==N-1) {
                count++;
                printf("solution %d\n",count);
                display();
            }
            else Nqueen(k+1);
        }
    }
}

void main(){
    printf("Enter number of queens for n x n board:");
    scanf("%d",&N);
    for(int i=0;i<MAX;i++) placed[i]=-1;
    Nqueen(0);    
}
