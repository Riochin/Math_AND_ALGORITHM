class Main {
    public class Solution{
        public static int frogDP(int n, int[] h){
            int[] dp = new int[n];

            dp[0] = 0;
            dp[1] = Math.abs(h[1]-h[0]);

            for(int i = 2 ;i<n ;i++){
                int x = Math.abs(h[i] - h[i-1]) + dp[i-1];
                int y = Math.abs(h[i] - h[i-2]) + dp[i-2];
                dp[i] = Math.min(x,y);
            }

            return dp[n-1];
        }
    }

    public static void main(String[] args) {
        int n = 5;
        int[] h = {8,6,9,2,1};

        int res = Solution.frogDP(n,h);
        System.out.println(res);
    }
}
