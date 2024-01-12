import java.io.*;
class convert_vowel
{
    public static void main(String args[])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the string with mixed case");
        String s=br.readLine();
        char c[]=s.toCharArray();
        for(int i=0;i<c.length;i++)
        {
            switch(c[i])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                {
                    c[i]=Character.toUpperCase(c[i]);
                    break;
                }
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                {
                    c[i]=Character.toLowerCase(c[i]);
                    break;
                }
            }
        }
        s=new String(c);
        System.out.println(s);
    }
}