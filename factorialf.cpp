int fact(int n)
{
    int i;
    unsigned prod = 1;
    for(i=1;i<=n;i++)
        prod = prod * i;

    return prod;
}