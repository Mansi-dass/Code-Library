class calculator 
{
    private int a,b;
    calculator()
    {
        a=0;
        b=0;
    }
    calculator(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    int add()
    {
        return a+b;
    }
    int sub()
    {
        return a-b;
    }
    int mult()
    {
        return a*b;
    }
    int div()
    {
        return a/b;
    }
    public static void main(int a,int b)
    {
        calculator obj=new calculator(a,b);
         System.out.println("a ="+a+ " &  b = "+b);
        System.out.println("Addition: "+obj.add());
        System.out.println("Subtraction: "+obj.sub());
        System.out.println("Multiplication: "+obj.mult());
        System.out.println("Division: "+obj.div());
    }
}