#include <stdio.h>
int main (){

int n;
int a;
scanf("%d",&n);
int gr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a);
        gr[i]=a;
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if ( gr[i]>gr[j]){
                 int temp=0; 
                 temp=gr[i];
                 gr[i]=gr[j];
                 gr[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",gr[i]); 
    }

    return 0;
}
