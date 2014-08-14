package com.personel;

public class Isci extends Personel {

	
	@Override
	public String toString() {
		
		return "isci: "+ this.getName();
	}
	
	@Override
	public boolean equals(Object obj) {
		if(this.getName() == ((Isci)obj).getName())
		{
			return true;
		}
		else
			return false;
	}
}
