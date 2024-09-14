import java.util.Scanner;
public class switching {
    public static void main(String args[]){
        String colour;
        String r;
        String g;
        String b;
        Scanner i = new Scanner(System.in);
        System.out.println("enter the colour by initial letter ");
        colour = i.nextLine();
        
        switch(colour){

            case "r" :
            System.out.println("the colour is RED");
            break;

            case "g" :
            System.out.println("the colour is GREEN");
            break;

            case "b" :
            System.out.println("the colour is BLUE");

            default:
            System.out.println("please enter colours i know ");



        }


    }

    
}
