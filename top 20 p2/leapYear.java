public class leapYear {
    public static void main(String[] args) {
        int y =1625;   
    if(y %100 == 0){
        if(y % 400 ==0 )
        System.out.println("leap year");
        else
        {
            System.out.println("not lp");
        }
    }
    else if (y % 100!=0){
        if(y % 4 ==0)
        System.out.println("lp");
        else
        System.out.println("not lp");
    }
    }
}
