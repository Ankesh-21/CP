import java.util.*;

public class solution{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Double k = sc.nextDouble();
        int rt = (int)Math.sqrt(k);
        k = Math.sqrt(k);

        if (rt == k){
            System.out.println(true);
        }else{
            System.out.println(false);
        }
        sc.close();
    }
};