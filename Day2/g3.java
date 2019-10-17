class Main {
    public static void main(String[] args) 
    {
        
        java.util.Scanner sc= new  java.util.Scanner(System.in);
        int tc =sc.nextInt();
        int ar[]=new int[tc];
        int reversed[]=new int[tc];
        for(int i=0;i<tc;i++)
        {
            ar[i]=sc.nextInt();
            int num=ar[i];
            while(num != 0) {
            int digit = num % 10;
            reversed[i] = reversed[i] * 10 + digit;
            num /= 10;
                
            }
        }
        
        
       
