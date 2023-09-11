import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        double R;

        Scanner scanner = new Scanner(System.in);
        R = scanner.nextDouble();
        scanner.close();

        System.out.printf("VOLUME = %.3lf\n", ((4 / 3.0) * PI * (R * R * R)));  // (4/3) * π * R³
    }
}