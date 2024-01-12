class binary
{
    static void conv(int n)
    {
        String s = " ";
        int d;
        while(n>0)
        {
            d=n%2;
            s=String.valueOf(d)+s;
            n=n/2;
        }
        System.out.println(s);
    }
}