package com.main;
import com.objects.*;
public class MainClass {

	public static void main(String[] args)
	{
		Kangru kg = new Kangru();
		kg.sesCikar();
		
		Memeli mm = new Memeli();
		mm.sesCikar();
		
		Kopek kp= new Kopek();
		kp.sesCikar();
		
		Hayvan hy = new Kopek();
		hy.sesCikar();
	}
	
}
