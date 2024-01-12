import java.io.*;
class Lsearch
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        int a[]=new int[10];
        System.out.println("Enter 10 values");
        for(int i=0;i<10;i++)
        {
            a[i]=Integer.parseInt(br.readLine());
        }
        System.out.println("Enter the value to be searched");
        int val=Integer.parseInt(br.readLine());
        int x=a.length;
        int p=0;
        for(int i=0;i<x;i++)
        {
            if(a[i]==val)
            {
                p=i+1;
            }
        }
        if(p>0)
        {
            System.out.println("Search Successful");
        }
        else
        {
            System.out.println("Search Unsuccessful");
        }
    }
}