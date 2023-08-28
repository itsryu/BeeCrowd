import java.util.Scanner;

class Main {
    public static final double weightA = 3.5;
    public static final double weightB = 7.5;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double A, B;

        A = scanner.nextDouble();
        B = scanner.nextDouble();
        scanner.close();

        System.out.printf("MEDIA = %.5f\n", ((A * weightA + B * weightB) / (weightA + weightB)));
    }    
}