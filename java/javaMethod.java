public class javaMethod {
    static void myMethod() {
        int abc2 = 121;
        System.out.println("I just got executed!" + abc2);
    }

    static int abc = 12;

    public static void main(String[] args) {
        myMethod();
        char a = 'a';
        System.out.println(abc);
        System.out.println(a);
    }
}