import java.util.Scanner;

class Main {
    public static final double PI = 3.14159;
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double R = scanner.nextDouble();
        scanner.close();

        System.out.printf("A=%.4f\n", (PI * Math.pow(R, 2)));
    }
}