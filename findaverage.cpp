#include<stdio.h>
int main()
{
    int i,toplam=0,ort=0;
    int dizi[]={1,2,3,4,5,9};
    for(i=0;i<6;i++)
    {
    
    toplam=toplam+dizi[i];
    ort++;
    
                   
    }
    
     printf("Ortalamasi: %d",toplam/ort);
    getchar();

}


