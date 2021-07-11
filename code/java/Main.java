class Student {
    String name;
    int id;
    double marks;
    Student(String n, int i, double m) {
    name=n;
    id=i;
    marks=m;
    }
     void show() {
     System.out.println(name+" "+id+" "+marks);
     }
}
public class Main {
	public static void main(String[] args) {
	Student s1=new Student("abul",21,20.3);
	Student s2=new Student("kabul",23,42.1);
	swap(s1,s2);
	s1.show();
	s2.show();
	}
	void swap(Student s1,Student s2) {
	Student s=s1;
	s1=s2;
	s2=s;
	}
}