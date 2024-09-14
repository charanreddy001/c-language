import java.util.Scanner;
public class vaddi {
   public static void main(String args[]){
    double amount;
    double principle;
    double rate = 0.02;
    double terminterest;
    double totalinterest;
    double  totalterms =21;

    System.out.println("enter the principle amount");
    Scanner i = new Scanner(System.in);
    principle = i.nextDouble();

    terminterest = principle*rate;
    totalinterest = terminterest*totalterms;
    

   }    
}