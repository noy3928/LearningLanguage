class Caculation{
    int add(int x, int y ){
        return x + y
    }
    int subtract(int x, int y){
        return x - y
    }
}

public class Main {
    public static void main(String[] args) {
		// write your code here
        Caculation caculation = new Caculation();
        int addResult = caculation.add(5, 3);
        int subtractResult = caculation.subtract(5, 3);

        System.out.println(addResult);
        System.out.println(subtractResult);
    }
}
