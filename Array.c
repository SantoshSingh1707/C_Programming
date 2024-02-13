// ============================================>ARRAY<======================================

#include <stdio.h>
#include <stdlib.h>
struct myarr{
    int totalsize;
    int usedsize;
    int *ptr;
};
void createarray(struct myarr* a ,int tsize,int usize){
    // (*a).totalsize=tsize;
    // (*a).usedsize=usize;
    // (*a).ptr =(int*)malloc(tsize*sizeof(int));
    a->totalsize=tsize;
    a->usedsize=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
}
void show(struct myarr *a){
    for(int i=0;i< a->usedsize;i++){
        printf("%d \n",(a->ptr)[i]);
    }
}
void set(struct myarr *a){
    int n;
    for(int i=0;i< a->usedsize;i++){
        printf("Enter the value =>");
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}
int main(){
    struct myarr marks;
    printf("We are running create array now\n");
    createarray(&marks,10,5);
    printf("We are running set value now\n");
    set(&marks);
    printf("We are running show now\n");
    show(&marks);
    return 0;
}


// 
