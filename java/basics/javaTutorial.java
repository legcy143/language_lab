public class javaTutorial {
    public static void main(String[] args) {
        System.out.println("\n ** har har mahadev ** \n");
        
        int num1 = 112; // 4byte
        int num2 = 122; // 4byte
        String str = "prince";// 2 x n(char length)
        char ch = 'A'; // 2byte
        boolean bool = true; // 1bit
        float myFloat = 12.12f; // 4byte
        System.out.println(ch+myFloat);
        System.out.println(bool);
        System.out.println("printing variables => " + num1 + " " + num2 + " " + str);

        // Math function
        int maxVal = Math.max(num1, num2);
        System.out.println("MAth function max value => " + maxVal);

        // if else
        if (num1 >= num2) {
            System.out.println("num2 is greater than num1");
        } else {
            System.out.println("num1 is greater than num2");
        }
        // shorthand if else
        String result = (num1 >= num2) ? "topper num1" : "topper num2";
        System.out.println("shorthand ifelse result => " + result);

        // loops
        int loopVar = 10;
        while(loopVar >= 0){
            System.out.println(loopVar);
            --loopVar;
        }

        // for each loop and array 
        String [] cars = {"volvo" , "bwm" , "hero honda" , "mahindra"};
        int[] arr = {1 ,2  ,3};
        for(String i :cars){
            System.out.println(i);
        }
        System.out.println(arr[0]);

        // multidimensional array 
        int[][] two_D_arr = {{11 , 12 , 13},{21,22,23}};
        System.out.println(two_D_arr[0][1]);
    }
}