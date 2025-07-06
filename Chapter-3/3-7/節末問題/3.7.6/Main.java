// N日間の夏休みで、2日連続で勉強しない場合の最高勉強量

/*
// 二日前以前の中で最高の勉強量を選び、i日めの勉強量と足し合わせる or しない
// 💡 「するしないを選ぶ」
// ❌ i-1日前以外の中の最高と、i日目の勉強量を足し合わせる？ -> 単純にやるとO(N^2)になる
*/

/*
 * 模範解答
 * dp1 -> i日目に勉強する場合の、勉強量合計最大値
 * dp2 -> i日目に勉強しない場合の、勉強量合計最大値
 * 
 * - i日目に勉強する時、i-1日目は勉強してないのでdp2 = dp2[i-1] + A[i]
 * - i日目に勉強しない時、dp2[i]はi-1日目の最大値
 */

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N+1];
        for(int i=1;i<=N;i++) A[i] = sc.nextInt();

        sc.close();

        long[] dp1 = new long[N+1];
        long[] dp2 = new long[N+1];

        dp1[0] = 0;
        dp2[0] = 0;

        for(int i=1;i<=N;i++){
            dp1[i] = dp2[ i - 1 ] + A[i];
            dp2[i] = Math.max(dp[i-1], dp2[i-1]);
        }

        long Answer = Math.max(dp1[N], dp2[N]);
        System.out.println(Answer);
    }
}
