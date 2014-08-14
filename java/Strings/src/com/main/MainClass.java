package com.main;

public class MainClass {
	
	public static void main(String[] args) {
		
		String s= new String("Ali topu at");
		s=s.concat(" çamur bulaştırma"); // birleştirdi
		
		System.out.println(s);
		System.out.println(s.charAt(13));// 13.harfi getirdi
		
		
		//StringBuilder ile memory kullanımı azalır gidip sonuna ekler
		
		StringBuilder strBuilder = new StringBuilder();
		
		strBuilder.append("ali topu ");
		strBuilder.append(" at");
		
		System.out.println(strBuilder);

		String s1= "Ali Kavlak";
		String s2= new String("Ali Kavlak");
		String s3= "Ali";
		String s4=" Kavlak";
		String s5=s3+s4;
		if(s1==s2)
		{
			System.out.println("Eşit");
		}	
		else
		{
			System.out.println("Eşit Değil");
		}
		
		if(s1==s5)
		{
			System.out.println("Eşit");
		}	
		else
		{
			System.out.println("Eşit Değil");
		}
		
		if(s2.equals(s5)) // bu şekilde karşılaştır !
		{
			System.out.println("Eşit");
		}	
		else
		{
			System.out.println("Eşit Değil");
		}
	}

}
