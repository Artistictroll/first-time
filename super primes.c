#include <stdio.h>
int sup(int x){
int count1=0,count2=0,count3=0,count4=0;
for (int a=1;a<=x;a++){
        if (x%a==0)
        count1++;
}
        if (count1==2){
            x=x/10;
            for (int a=1;a<=x;a++){
                if (x%a==0)
                count2++;
            }
                    if (count2==2){
                    x=x/10;
                    for (int a=1;a<=x;a++){
                        if (x%a==0)
                        count3++;
                    }
                            if (count3==2){
                            x=x/10;
                            for (int a=1;a<=x;a++){
                                if (x%a==0)
                                count4++;
                            }
                            if (count4==2)
                                return (1);
                            else return (0);
                        }
                        else return (0);
                }
                else return (0);
        }
        else return (0);
}

int main (){
int res[10],i,tes[3000],y=0;

    for (i=3000;i<=6000;i++){
    tes[i-3000]= sup(i);
        if (tes[i-3000]==1){
            res[y]=i;
            y++;
            if (y==3) break;
        }
    }
    printf ("%d\n",res[2]);
    return 0;
}
