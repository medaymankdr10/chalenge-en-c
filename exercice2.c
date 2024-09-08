
#include <stdio.h>

int main() {
    int a;
    printf("tapez la taille du tableau :");
    scanf("%d",&a);
    int t[a];
    for (int i=0; i<a; i++){
        printf("entrez element %d: ",i+1);
        scanf("%d",&t[i]);
    }

    return 0;
}
