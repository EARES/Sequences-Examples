

#include<stdio.h>
void enbuyuk(float a[4])
{
     float max=a[0];
     int i;
     for(i=0; i<4; i++)
     {
              if(max<a[i])
              {
                          max=a[i];
                          }
     }
     printf("en buyuk: %f",max);
}
int main()
{
    float max;
    int i;
    float dizi[4];
    for(i=0;i<4;i++)
    {
                    printf("dizinin %d. elemani: \n",i);
                    scanf("%f",&dizi[i]);
                    }
                    
    enbuyuk(dizi);
    getchar();
    getchar();
    
}

