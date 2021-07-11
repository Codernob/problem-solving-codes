void set(int *p) {
if((*p)%2!=0) (*p)++;
}
main ()
{
    int m, n;
    scanf("%d%d",&m,&n);
    set(&m); set(&n);
    printf("%d",(m*n)/4);
}
