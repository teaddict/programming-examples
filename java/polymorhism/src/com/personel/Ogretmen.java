package com.personel;

public class Ogretmen extends Personel {
	
	public void maasArtti()
	{
		System.out.println("maasş arttı");
	}
	
	@Override
	public String toString() {
		
		return "Ogretmen: " + this.getName();
	}
	
}
