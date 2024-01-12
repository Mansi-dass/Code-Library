import java.io.*;
class evil_No
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a positive whole number");
        int N=Integer.parseInt(br.readLine());
        if(N>2&&N<100)
        {
            int rem,bv=0,n1=N,d,rev=0,count=0,n2=N,c1=0;
            while(n1>0)
            {
                rem=n1%2;
                bv=(bv*10)+rem;
                n1=n1/2;
                c1++;
            }
            while(c1>0)
            {
                d=bv%10;
                rev=(rev*10)+d;
                bv=bv/10;
                if(d==1)
                {
                    count++;
                }
                c1--;
            }
            int y=count%2;
            if(y==0)
            {
                System.out.println(N+" is a Evil Number");
                System.out.println("Binary Equivalent : "+rev);
                System.out.println("Number of 1's : "+count);
            }
            else
            {
                System.out.println(N+" is not a Evil Number");
                System.out.println("Binary Equivalent : "+rev);
                System.out.println("Number of 1's : "+count);
                
            }
        }
    }
}