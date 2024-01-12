class HCF_LCM
{
    public static void main(int a,int b)
    {
        int n,d,r,hcf,lcm;
        n=a;
        d=b;
        r=n%d;
        while(r!=0)
        {
            n=d;
            d=r;
            r=n%d;
        }
        hcf=d;
        lcm=(a*b)/hcf;
        System.out.println("HCF of "+a+" and "+b+" = "+hcf);
        System.out.println("LCM of "+a+" and "+b+" = "+lcm);
    }
}