#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp,*fp2,*fp3;
    char p,z;
    int l,i=0,n=0,v1=0,h1=0,k=0,c=0;
    char a[10];
int H[10000];
int V[10000];
            fp=fopen("a_example.txt","r");
            fp2=fopen("newabcfile1.txt","w");
while((p=getc(fp))!='\n'){
    a[i]=p;
    i++;
}
l=atoi(a);
           while(n<l)
            {
                p=getc(fp);

if(p=='H'){
     H[h1]=n;
     h1++;
     n++;
    while((p=getc(fp))!='\n');
}
if(p=='V'){
     V[v1]=n;
     v1++;
     n++;
    while((p=getc(fp))!='\n');
}
            }

            while(k<n){
if(h1>0){
    h1--;
    fprintf(fp2,"%d",H[h1]);
    fputc('\n',fp2);
c++;
k++;
}
if(v1>1){
    v1--;
    fprintf(fp2,"%d",V[v1]);
    fputc(' ',fp2);
k++;
v1--;
 fprintf(fp2,"%d",V[v1]);
    fputc('\n',fp2);
c++;
k++;
}
else if(v1=0){
    v1--;
    fprintf(fp2,"%d",V[v1]);
    fputc('\n',fp2);
   c++;
k++;
}
            }
fclose(fp);
fclose(fp2);
 fp2=fopen("newabcfile1.txt","r");
fp3=fopen("newfile1.txt","w");
fprintf(fp3,"%d",c);
fputc('\n',fp3);
z=fgetc(fp2);
    while (z != EOF)
    {
        fputc(z, fp3);
        z = getc(fp2);
    }
fclose(fp2);
fclose(fp3);
return 0;
}
