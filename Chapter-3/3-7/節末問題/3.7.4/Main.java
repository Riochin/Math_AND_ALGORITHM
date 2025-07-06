import java.util.*;

// Time complexity: O(NS)
// Space complexity: O(NS)

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int S = sc.nextInt();
        int[] A = new int[N+1];
        for(int i=1;i<=N;i++) A[i] = sc.nextInt();

        boolean[][] dp = new boolean[N+1][S+1];
        dp[0][0] = true;

        for (int i=1;i<=N;i++){
            for(int j=0;j<=S;j++){
                if(dp[i-1][j] == true) dp[i][j] = true;
                if(A[i] > j) continue;
                if(dp[i-1][j-A[i]] == true){
                    dp[i][j] = true;
                }
            }
            // System.out.println(Arrays.toString(dp[i]));
        }

        if(dp[N][S] == true){
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}
