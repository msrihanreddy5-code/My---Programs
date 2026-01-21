import java.util.*;

public class MatrixOperations {

    static Scanner sc = new Scanner(System.in);

    static int[][] inputMatrix(int r, int c) {
        int[][] a = new int[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                a[i][j] = sc.nextInt();
        return a;
    }

    static void printMatrix(int[][] a) {
        for (int[] row : a) {
            for (int x : row)
                System.out.print(x + " ");
            System.out.println();
        }
    }

    static int[][] add(int[][] A, int[][] B, int r, int c) {
        int[][] res = new int[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                res[i][j] = A[i][j] + B[i][j];
        return res;
    }

    static int[][] subtract(int[][] A, int[][] B, int r, int c) {
        int[][] res = new int[r][c];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                res[i][j] = A[i][j] - B[i][j];
        return res;
    }
    static int[][] multiply(int[][] A, int[][] B, int r1, int c1, int c2) {
        int[][] res = new int[r1][c2];
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c2; j++)
                for (int k = 0; k < c1; k++)
                    res[i][j] += A[i][k] * B[k][j];
        return res;
    }

    static int[][] transpose(int[][] A, int r, int c) {
        int[][] t = new int[c][r];
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                t[j][i] = A[i][j];
        return t;
    }
    static int determinant(int[][] a, int n) {
        if (n == 1)
            return a[0][0];

        if (n == 2)
            return a[0][0] * a[1][1] - a[0][1] * a[1][0];

        int det = 0, sign = 1;

        for (int col = 0; col < n; col++) {
            int[][] sub = new int[n - 1][n - 1];

            for (int i = 1; i < n; i++) {
                int subCol = 0;
                for (int j = 0; j < n; j++) {
                    if (j == col) continue;
                    sub[i - 1][subCol++] = a[i][j];
                }
            }
            det += sign * a[0][col] * determinant(sub, n - 1);
            sign = -sign;
        }
        return det;
    }

    public static void main(String[] args) {

        System.out.print("Enter rows and columns of Matrix A: ");
        int r1 = sc.nextInt();
        int c1 = sc.nextInt();

        System.out.println("Enter Matrix A:");
        int[][] A = inputMatrix(r1, c1);

        while (true) {

            System.out.println("\n--- MENU ---");
            System.out.println("1. Display Matrix A");
            System.out.println("2. Addition (A + B)");
            System.out.println("3. Subtraction (A - B)");
            System.out.println("4. Multiplication (A X B)");
            System.out.println("5. Transpose of A");
            System.out.println("6. Determinant of A");
            System.out.println("7. Exit");

            System.out.print("Enter choice: ");
            int ch = sc.nextInt();

            if (ch == 7) {
                System.out.println("Program Ended.");
                break;
            }

            int[][] B, result;
            int r2, c2;

            switch (ch) {

                case 1:
                    printMatrix(A);
                    break;

                case 2:
                case 3:
                    System.out.print("Enter rows and columns of Matrix B: ");
                    r2 = sc.nextInt();
                    c2 = sc.nextInt();

                    if (r1 != r2 || c1 != c2) {
                        System.out.println("Operation not possible (Dimension mismatch)");
                        break;
                    }

                    System.out.println("Enter Matrix B:");
                    B = inputMatrix(r2, c2);

                    result = (ch == 2) ? add(A, B, r1, c1)
                                       : subtract(A, B, r1, c1);

                    System.out.println("Result:");
                    printMatrix(result);
                    break;

                case 4:
                    System.out.print("Enter rows and columns of Matrix B: ");
                    r2 = sc.nextInt();
                    c2 = sc.nextInt();

                    if (c1 != r2) {
                        System.out.println("Multiplication not possible as columns of A not equal to rows of B");
                        break;
                    }

                    System.out.println("Enter Matrix B:");
                    B = inputMatrix(r2, c2);

                    result = multiply(A, B, r1, c1, c2);
                    System.out.println("Result:");
                    printMatrix(result);
                    break;

                case 5:
                    result = transpose(A, r1, c1);
                    System.out.println("Transpose:");
                    printMatrix(result);
                    break;

                case 6:
                    if (r1 != c1)
                        System.out.println("Determinant not possible (Not square matrix)");
                    else
                        System.out.println("Determinant = " + determinant(A, r1));
                    break;

                default:
                    System.out.println("Invalid Choice");
            }
        }
    }
}
