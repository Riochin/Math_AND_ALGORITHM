import java.util.*;

public class Main {
    public static int fibonacci(int N) {
        int prev2 = 1; // F(0)
        int prev1 = 1; // F(1)
        
        for (int i = 2; i <= N; i++) {
            int current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }
        
        return prev1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int ans = fibonacci(N);
        System.out.println(ans);

        sc.close();
    }
}
