import java.util.Scanner;

public class javaInputOutput{
    public static void main(String[] args){
        System.out.println("har har mahadev");

        // create object/instance of scanner class
        Scanner scan = new Scanner(System.in);

        // taking input varibale of int type
        int num = scan.nextInt();
        System.out.println("input int = "+num);

        //taking input variable of decimal or float type 
        double decNum = scan.nextDouble();
        System.out.println("input float = "+decNum);

        //taking input of boolean type e.g : true || false only
        boolean bll = scan.nextBoolean();
        System.out.println("input bool = "+bll);

        /*
         * there are many method for taking string input 
         * for taking continues input we can use scan.next();
         * and for taking whole line we can you scan.nextLine();
         */
        String str = scan.nextLine();
        System.out.println("input str = "+str);
        
        // close scanner after use
        scan.close();
    }
}