#include <stdio.h>
#include<string.h>
int fun(int *arr,int num){
    int i;
    for(i=0;i<num;i++){
        if(arr[i]==i)
            return arr[i];
    }
    return -1;
}
int main()
{
    int num,i;
    scanf("%d",&num);
    int a[num+1];
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    
    int res=fun(a,num);
    if(res!=-1)
        printf("%d",res);
    else
        printf("Not found");
    return 0;
}
