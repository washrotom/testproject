public class Gugudan {
	public static void main(String [] args) {

		System.out.println("\n========= 구구단 ==========");
		int num = 16;
		for(int i=2; i<num; i++) {
		 System.out.println(i + "단");
		 for(int j=1; j<num; j++) {
		  System.out.println(i + "x" + j + "=" + (i*j));
		 }
		System.out.println();
		}
	}
}
