public class leapYear2 {
    public static void main(String[] args) {

        int y = 1601;
        int ans = Func(y);
        System.out.println(ans);

    }
    public static int Func(int y){
        if(y%400==0)
        return 1;
        if(y %100 == 0)
        return 0;
        if(y % 4== 0)
        return 1;

        return 0;}
}
