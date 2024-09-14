import java.util.Scanner;


 class first {
    public static void main(String args[]){
        Scanner i = new Scanner(System.in);
        char ch;
       
        System.out.println("enter a letter ");
        ch = i.next().charAt(0);
        System.out.println("you have entered " + ch);
        //  if you take char data type it will take only one letter at a certain place so char is not used 
        // instead string is used ot take all letters

        int j;
        int x =0;
        System.out.println("enter how many times :");
        j = i.nextInt();
        while(j>x){
            x++;
            System.out.println(x+"."+" you are a looser");

        }
    }      
}
