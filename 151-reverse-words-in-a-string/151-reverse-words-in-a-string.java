class Solution {
    public String reverseWords(String s) {
         String str="";
        s=s.trim();
       String  str2[]=s.split(" ");
       

       for(int i=str2.length-1;i>=0;i--)
       {
          str2[i]=str2[i].trim();
        if(str2[i].length()>0)
        {
          if(i==str2.length-1)
          {
            str+=str2[i];
          }
          else{
            str=str+" "+str2[i];
          }
        }

       }
        

        return str;
        
    }
}