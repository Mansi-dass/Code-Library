import java.io.*;
class calculate_mean
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Choose from:");
        System.out.println("1. Arithmetic Mean");
        System.out.println("2. Geometric Mean");
        System.out.println("3. Harmonic Mean");
        System.out.println("Enter your choice");
        int ch=Integer.parseInt(br.readLine());
        System.out.println("Enter the first value");
        int a=Integer.parseInt(br.readLine());
        System.out.println("Enter the second value");
        int b=Integer.parseInt(br.readLine());
        double m;
        switch(ch)
        {
            case 1:
            {
                m=(a+b)/2;
                System.out.println("Arithmetic mean = "+m);
                break;
            }
            case 2:
            {
                m=Math.sqrt(a*b);
                System.out.println("Geometric mean = "+m);
                break;
            }
            case 3:
            {
                m=(2*a*b)/(a+b);
                System.out.println("Harmonic mean = "+m);
                break;
            }
            default:
            System.out.println("Invalid Choice");
            break;
        }
    }
}