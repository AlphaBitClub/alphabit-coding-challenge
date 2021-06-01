#include <stdio.h>
#include <stdlib.h>




int main()
{

    int n,m,id,d,e,t,a,wid;
    int wallarr[101][2];
    int wavearr [101][2];
    int flag=0;

    // read the input
    scanf("%d %d",&n,&m);
    for(int i =0;i<n;i++){
        scanf("%d %d %d",&id,&d,&e);
        wallarr[id-1][0]= d;
        wallarr[id-1][1]= e;
        };
    for(int i =0;i<m;i++){
    scanf("%d %d",&t,&a);
    wavearr[i][0]= t;
    wavearr[i][1]= a;
    };
    // traitment
    id = n-1;
    wid = 0;
    a=wavearr[wid][1];

     for (int i =0;i<n;i++){
        wallarr[i][0] += wallarr[i][1]*wavearr[0][0];
           }
    while ((wid<m)&&(!flag)){
            if (wallarr[id][0]>=a){
                for (int i =0;i<n;i++){
                wallarr[i][0] += wallarr[i][1];
                }
                wid++;
                if(wid<m){a+=wavearr[wid][1];}



            }else{
                if (id == 0){flag = 1;}else{
                     id--;
                     for (int i =0;i<n;i++){
                    wallarr[i][0] += wallarr[i][1];
                    }
                }

            }
    }




// write the output

if (flag){printf("humanity in danger ");}else{
    printf("%d",id+1);
}

    return 0;
}


