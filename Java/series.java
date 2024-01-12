class series
{
    public static int fact(int x)
    {
        int p=1;
        for(int i=1;i<=x;i++)
        {
            p=p*i;
        }
        return p;
    }
    public static void main(int a, int n)
    {
        double s=1;
        int c=1;
        for(int i=2;i<=n;i++)
        {
            s=s+(Math.pow(a,i)/fact(c));
            c++;
        }
        System.out.println("sum of the series 1 + a^2/1! + a^3/2! + a^n/3! : "+s);
    }
}