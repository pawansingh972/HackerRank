import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int N, Q;
        int a, x, y;
        int lastAnswer = 0;

        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        Q = sc.nextInt();

        ArrayList<ArrayList<Integer>> seqList = new ArrayList<ArrayList<Integer>>(N);
        ArrayList<Integer> seq;
        for (int i = 0; i < N; i++) {
            seq = new ArrayList<Integer>();
            seqList.add(seq);
        }
        for (int i = 0; i < Q; i++) {
            seq = new ArrayList<Integer>();
            a = sc.nextInt();
            x = sc.nextInt();
            y = sc.nextInt();

            seq = seqList.get((x ^ lastAnswer)  % N);
            if (a == 1) {
                seq.add(y);
            } else if(a == 2) {
                lastAnswer = seq.get(y % seq.size());
                System.out.println(lastAnswer);
            }

        }
    }
}
