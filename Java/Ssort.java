import java.io.*;
class Ssort
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        int a[]=new int[20];
        System.out.println("Enter 20 values ");
        for(int i=0;i<20;i++)
        {
            a[i]=Integer.parseInt(br.readLine());
        }
        int x=a.length;
        int m,p;
        for(int i=0;i<x-1;i++)
        {
            m=a[i];
            p=i;
            for(int j=i+1;j<x;j++)
            {
                if(m>a[j])
                {
                    m=a[j];
                    p=j;
                }
            }
            a[p]=a[i];
            a[i]=m;
        }
        for(int i=0;i<x;i++)
        {
            System.out.print(a[i]+" ");
        }
    }
}