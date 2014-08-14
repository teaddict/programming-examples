package com.objects;

public class Araba extends Arac {
	
	private String kasaTipi;
	
	public Araba() {
		// TODO Auto-generated constructor stub
	}

	public Araba(String kasaTipi,int motorHac,int tekSay,String vites,String renk) {
		super(motorHac,tekSay,vites,renk);// ana constructora yolladı
		this.kasaTipi = kasaTipi;
	}

	public String getKasaTipi() {
		return kasaTipi;
	}

	public void setKasaTipi(String kasaTipi) {
		this.kasaTipi = kasaTipi;
	}
	
	
	
}
