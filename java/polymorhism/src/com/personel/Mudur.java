package com.personel;

public class Mudur extends Personel {
	
	public void iseAl(Personel p)
	{
		p.iseAlindi();
	}
	
	public void terfiEttir(Personel p){
		
		if(p instanceof Ogretmen)
		{
		((Ogretmen)p).maasArtti();
		}
		else
		{
		System.out.println("yalnızca öğretmen terfi alabilir.");
		}
	}
	
	@Override
	public String toString() {
		
		return "müdür: " + this.getName();
	}

}
