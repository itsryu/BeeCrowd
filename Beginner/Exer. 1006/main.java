import java.util.Scanner;

class Main {
    public static final double weightA = 2.0;
    public static final double weightB = 3.0;
    public static final double weightC = 5.0;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double A, B, C;
        A = scanner.nextDouble();
        B = scanner.nextDouble();
        C = scanner.nextDouble();
        scanner.close();

        System.out.printf("MEDIA = %.1f\n", ((A * weightA + B * weightB + C * weightC)) / (weightA + weightB + weightC));
    }
}