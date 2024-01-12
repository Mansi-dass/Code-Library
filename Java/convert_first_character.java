import java.io.*;
class convert_first_character
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the string");
        String s=br.readLine();
        s=" "+s.toLowerCase();
        char c[]=s.toCharArray();
        for(int i=0;i<c.length;i++)
        {
            switch(c[i])
            {
                case ' ':
                c[i+1]=Character.toUpperCase(c[i+1]);
                break;
            }
        }
        s=new String(c);
        System.out.println(s);
    }
}