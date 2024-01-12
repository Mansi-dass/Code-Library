import java.io.*;
class potential
{
    public static int getpotential(String word)
    {
        int potential=0;
        for(int i=0;i<word.length();i++)
        {
            potential+=word.charAt(i);
        }
        return potential;
    }
    public static void sort(String words[])
    {
        for(int i=0;i<words.length;i++)
        {
            for(int j=0;j<words.length-1;j++)
            {
                if(getpotential(words[j])>getpotential(words[j+1]))
                {
                    String temp=words[j];
                    words[j]=words[j+1];
                    words[j+1]=temp;
                }
            }
        }
    }
    public static void main(String args[ ])throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter string");
        String str=br.readLine();
        char lastchar=str.charAt(str.length()-1);
        if(lastchar=='.' || lastchar=='?' || lastchar=='!')
        {
            str=str.toUpperCase();
            str=str.substring(0,str.length()-1);
            String words[]=str.split(" ");
            for(int i=0;i<words.length;i++)
            {
                System.out.println(words[i]+" = "+getpotential(words[i]));
            }
            sort(words);
            for(int i=0;i<words.length;i++)
            {
                System.out.print(words[i]+" ");
            }
        }
        else
        {
            System.out.println("Invalid Input");
        }
    }
}