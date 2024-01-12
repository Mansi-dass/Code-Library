import java.io.*;
class menu_driven
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        System.out.println("1. For loop");
        System.out.println("2. While loop");
        System.out.println("3. Do while loop");
        System.out.println("4. Conditional Statements");
        System.out.println("Enter your choice");
        int ch=Integer.parseInt(br.readLine());
        switch(ch)
        {
            case 1:
            {
                System.out.println("Enter the length of the loop to print number");
                int n=Integer.parseInt(br.readLine());
                for(int i=1;i<=n;i++)
                {
                    System.out.print(i+" ");
                }
                break;
            }
            case 2:
            {
                System.out.println("Enter the length of the loop to print number");
                int n=Integer.parseInt(br.readLine());
                int i=1;
                while(i<=n)
                {
                    System.out.print(i+" ");
                    i++;
                }
                break;
            }
            case 3:
            {
                System.out.println("Enter the length of the loop to print number");
                int n=Integer.parseInt(br.readLine());
                int i=1;
                do{
                    System.out.print(i+" ");
                    i++;
                }while(i<=n);
                break;
            }
            case 4:
            {
                System.out.println("1. If-else statement");
                System.out.println("2. If-else-if statement");
                System.out.println("Enter your choice");
                int op=Integer.parseInt(br.readLine());
                switch(op)
                {
                    case 1:
                    {
                        System.out.println("Enter the first value");
                        int a=Integer.parseInt(br.readLine());
                        System.out.println("Enter the second value");
                        int b=Integer.parseInt(br.readLine());
                        if(a>b)
                        {
                            System.out.println("A is Greater than B");
                        }
                        else
                        {
                            System.out.println("B is Greater than A");
                        }
                        break;
                    }
                    case 2:
                    {
                        System.out.println("Enter the first value");
                        int a=Integer.parseInt(br.readLine());
                        System.out.println("Enter the second value");
                        int b=Integer.parseInt(br.readLine());
                        if(a>b)
                        {
                            System.out.println("A is Greater than B");
                        }
                        else if(b>a)
                        {
                            System.out.println("B is Greater than A");
                        }
                        else
                        {
                            System.out.println("A is equal to B");
                        }
                        break;
                    }
                    default:
                    {
                        System.out.println("Invalid Choice");
                        break;
                    }
                }
                break;
            }
            default:
            {
                System.out.println("Invalid Choice");
                break;
            }
        }
    }
}