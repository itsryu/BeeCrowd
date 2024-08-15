import java.util.Scanner;

public class Main {
    public static double PI = 3.14159;

    public static void main(String[] args) {
        double sideA = 0, sideB = 0, height = 0;

        Scanner scanner = new Scanner(System.in);

        String[] input = scanner.nextLine().split(" ");
        sideA = Double.parseDouble(input[0]);
        sideB = Double.parseDouble(input[1]);
        height = Double.parseDouble(input[2]);

        System.out.printf("TRIANGULO: %.3lf\n", (sideA * height) / 2);
        System.out.printf("CIRCULO: %.3lf\n", PI * height * height);
        System.out.printf("TRAPEZIO: %.3lf\n", ((sideA + sideB) * height) / 2);
        System.out.printf("QUADRADO: %.3lf\n", sideB * sideB);
        System.out.printf("RETANGULO: %.3lf\n", sideA * sideB);

        scanner.close();
    }
}