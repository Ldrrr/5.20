int* printNumbers(int n, int* returnSize)
{
    int a,i;
    a=pow(10,n)-1;
    int *s=(int *)malloc(sizeof(int)*a);
    for(i=0;i<a;i++)
    {
        s[i]=i+1;
    }
    * returnSize=a;
    return s;
}
