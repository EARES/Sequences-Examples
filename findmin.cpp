#include<stdio.h>
int main()
{
    int i,min;
    int dizi[]={1,2,3,4,5,6};
    min=dizi[0];
    for(i=0;i<6;i++)
    {
    if(min>dizi[i])
    {
                   min=dizi[i];
                   
     }
                   
    }
     printf("En kucuk: %d",min);
    getchar();

}

