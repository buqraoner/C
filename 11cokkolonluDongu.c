#include <stdio.h>
#include <math.h>
int main()
{
    int satir,i,j,k,l, tmpi = 0, tmpj = 0, tmpk = 100, tmpl = 0; //tmp ile olan degiskenler donguye cikip tekrar geldiginde kaldigi yerden baslamasi icin kullanilan degiskenler digerleride sayactir.

    for(satir = 0; satir < 6; satir++) //6 satir
    {

        for(i = 1; i < 100; i++) // ilk kolon
        {
            if(i < tmpi)    //Dongude kaldigimiz yeri hatirliyoruz.
            {
                i = tmpi;
            }

            if(i % 15 == 0)
            {
                printf("%d ", i);
                tmpi = i+1;
                break;    //Eslesme buldugumuzda kaldigimiz yeri degiskene aktarip donguyu kiriyoruz.
            }
        }

        for(j = 1; j < 31; j++)
        {
            if(j < tmpj)    //Dongude kaldigimiz yeri hatirliyoruz.
            {
                j = tmpj;
            }

            if(j % 5 == 0)
            {
                tmpj = j+1;
                printf("%d ", j);
                break;    //Eslesme buldugumuzda kaldigimiz yeri degiskene aktarip donguyu kiriyoruz.
            }
        }

        for(k = 100; k > 49; k--)
        {
            if(k > tmpk)    //Dongude kaldigimiz yeri hatirliyoruz.
            {
                k = tmpk;
            }
            if(k % 10 == 0)
            {

                printf("%d ", k);
                tmpk = k-1;
                break;    //Eslesme buldugumuzda kaldigimiz yeri degiskene aktarip donguyu kiriyoruz.
            }
        }

        for(l = 1; l < 7; l++)
        {
            if(l < tmpl)    //Dongude kaldigimiz yeri hatirliyoruz.
            {
                l = tmpl;
            }

            double ussu = pow(2,l);
            printf("%.0lf ", ussu);
            tmpl = l+1;
            break;    //Eslesme buldugumuzda kaldigimiz yeri degiskene aktarip donguyu kiriyoruz.
        }

        printf("\n"); //Alt satira iniyoruz ilk satir bitti.

    }

    return 0;
}









