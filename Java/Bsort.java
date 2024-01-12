import java.io.*;
class Bsort
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
        int t;
        for(int i=0;i<x-1;i++)
        {
            for(int j=0;j<x-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
        for(int i=0;i<20;i++)
        {
            System.out.print(a[i]+" ");
        }
    }
}