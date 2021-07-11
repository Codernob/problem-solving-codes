class Car {
String model;
float enginePower;
int speed;
void start() {
	speed=10;
	}
void accelerate() {
	speed+=10;
	}
void stop() {
speed=0;
	}
int getSpeed() {
return speed;
	}
}
public class TestCar {
	public static void main(String[] args) {
		Car myCar=new Car();
		myCar.enginePower=2.5f;
		myCar.start();
		myCar.accelerate();
		System.out.println(myCar.getSpeed());
	}
}