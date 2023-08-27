import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double R = scanner.nextDouble();
        scanner.close();

        System.out.printf("A=%.4f\n", (3.14159 * Math.pow(R, 2)));
    }
}