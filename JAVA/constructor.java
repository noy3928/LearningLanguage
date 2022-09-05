//생성자를 입력해주지 않으면, 자바 컴파일러가 자동으로 빈 생성자를 하나 만들어준다. 
class Phone {
    String model;
    String color;
    int price;

    //생성자의 이름은 클래스의 이름과 같아야 한다. 
    Phone(String model, String color, int price){
        this.model = model;
        this.color = color;
        this.price = price;
    }
}

public class Main {
    public static void main(String[] args) {
        Phone galaxy = new Phone("galaxy10", 'black', 200);

        Phone iphone =new Phone("iphone 12", 'white', 100);

        System.out.println("철수는 이번에 " + galaxy.model + galaxy.color + " + 색상을 " + galaxy.price + "만원에 샀다.");
        System.out.println("영희는 이번에 " + iphone.model + iphone.color + " + 색상을 " + iphone.price + "만원에 샀다.");
    }
}