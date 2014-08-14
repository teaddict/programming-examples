package com.main;
import com.personel.*;
public class MainClass2 {

	public static  void main(String[] args)
	{
		Mudur mudur = new Mudur();
		mudur.setName("ali");
		
		Personel isci = new Isci();
		Personel ogretmen = new Ogretmen();
		Personel isci2= new Isci();
		
		isci.setName("cem");
		ogretmen.setName("hakan");
		isci2.setName("veli");
		
		mudur.iseAl(isci);
		mudur.iseAl(ogretmen);
		
		mudur.terfiEttir(ogretmen);
		mudur.terfiEttir(isci);
		
		System.out.println(mudur); // alttakiyle aynıdır !!!
		System.out.println(mudur.toString());
		
		System.out.println(isci);
		System.out.println(ogretmen);
		
		if(isci==isci2)
		{
		//ikisinin adresleri aynıysa true değilse false döndürür
		}
		
		if(isci.equals(isci2))
		{
			System.out.println("eşit");
		}
		else
			System.out.println("eşit değil");
	}
	
}
