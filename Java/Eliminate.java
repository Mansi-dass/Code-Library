import java.io.*;
class Eliminate
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        int a[]=new int[10];
        System.out.println("Enter 10 values ");
        for(int i=0;i<10;i++)
        {
            a[i]=Integer.parseInt(br.readLine());
        }
        int n=a.length;
        int t[]=new int[n];
        int p=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    p=j;
                    for(int k=p;k<n-1;k++)
                    {
                        a[k]=a[k+1];
                    }
                    n--;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
        }
    }
}