#include<stdio.h>
int main()
{
     int npro=5,nres=4,i,j,k,l,r=3,finish[5]={0},m=0,need[5][4];
    int flag, seq[5];
int alloc[5][4]={{0,2,0,2},
                 {2,0,1,2},
                 {3,0,0,1},
                 {2,1,0,2},
                 {0,0,1,2}};
int max [5][4]= {{5,4,3,2},
                 {9,0,2,3},
                 {4,2,3,3},
                 {3,2,1,3},
                 {4,3,2,3}};

   //  int avail[4]={1,1,1,1};
     int avail[4]={7,4,8,3};

     for(i=0;i<npro;i++)
     {
         for(j=0;j<nres;j++)
         {
             need[i][j]=max[i][j]-alloc[i][j];
         }
     }
     for(l=0;l<r;l++)
     {
         for(i=0;i<npro;i++)
         {
             if(finish[i]==0)
            {
                flag=0;
                for(j=0;j<nres;j++)
                {
                    if(need[i][j]>avail[j])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    {
                    for(k=0;k<nres;k++)
                    {
                        avail[k]= avail[k]+alloc[i][k];
                    }
                    finish[i]=1;
                    seq[m++]=i;
                }
             }
           }
         }
           flag=0;
    for(i=0;i<5;i++)
    {
            if(finish[i]==0)
        {
            flag=1;
            break;
        }
    }
     if(flag==0)
    {
        printf("The following Sequence is Safe\n");
        for(i=0;i<npro;i++)
        {
            printf("P%d-> ",seq[i]);
        }
    }
    else
    {
        printf("The following Sequence is Unsafe\n");
                for(i=0;i<npro;i++)
        {
            printf("P%d-> ",seq[i]);
        }
    }


}
