import java.io.*;
class denomination
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the amount:");
        int a=Integer.parseInt(br.readLine());
        int t=a;
        int c;
        while(t!=0)
        {
            if(t>=100)
            {
                c=t/100;
                t=t-(c*100);
                System.out.println("No. of notes of Rs.100 = "+c);
            }
            else if(t<100 && t>=50)
            {
                c=t/50;
                t=t-(c*50);
                System.out.println("No. of notes of Rs.50 = "+c);
            }
            else if(t<50 && t>=20)
            {
                c=t/20;
                t=t-(c*20);
                System.out.println("No. of notes of Rs.20 = "+c);
            }
            else if(t<20 && t>=10)
            {
                c=t/10;
                t=t-(c*10);
                System.out.println("No. of notes of Rs.10 = "+c);
            }
            else if(t<10 && t>=5)
            {
                c=t/5;
                t=t-(c*5);
                System.out.println("No. of notes of Rs.5 = "+c);
            }
            else if(t<5 && t>=2)
            {
                c=t/2;
                t=t-(c*2);
                System.out.println("No. of notes of Rs.2 = "+c);
            }
            else if(t==1)
            {
                c=t;
                t=t-c;
                System.out.println("No. of notes of Rs.1 = "+c);
            }
        }
    }
}