package com.objects;

public class Subaru extends Araba{
	
	private String tip;

	public Subaru(String tip,String kasaTip, int motorHac,int tekSay,String vites,String renk) {
		super(kasaTip,motorHac,tekSay,vites,renk); // bir üst sınıf constructoruna yolladı
		this.tip = tip;
	}

	public String getTip() {
		return tip;
	}

	public void setTip(String tip) {
		this.tip = tip;
	}
	

}
