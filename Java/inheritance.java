class inheritance
{
    public static void main(String args[])
    {
        System.out.println("Output of Multilevel Inheritance:");
        subclass2 obj = new subclass2();
        obj.methodA(); 
        obj.methodB();
        obj.methodC(); 
        System.out.println("Output of Hierarchial Inheritance:");
        B obj1 = new B();
        C obj2 = new C();
        D obj3 = new D();
        obj1.methodA();
        obj2.methodA();
        obj3.methodA();
    }
}

class superclass
{
    public void methodA()
    {
        System.out.println("superclass");
    }
}
class subclass1 extends superclass
{
    public void methodB()
    {
        System.out.println("subclass1 ");
    }
}
class subclass2 extends subclass1
{
    public void methodC()
    {
        System.out.println("subclass2");
    }
}

class A
{
    public void methodA()
    {
        System.out.println("Method of Class A");
    }
}
class B extends A
{
    public void methodB()
    {
        System.out.println("Method of Class B");
    }
}
class C extends A
{
    public void methodC()
    {
        System.out.println("Method of Class C");
    }
}
class D extends A
{
    public void methodD()
    {
        System.out.println("Method of Class D");
    }
}