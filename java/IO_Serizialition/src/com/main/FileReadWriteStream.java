package com.main;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class FileReadWriteStream {
public static void main(String[] args) {
	
	try {
		File file =new File("/home/test/test.txt");
	
//		//dosya yazma
//		if(!file.exists())
//	{
//			file.createNewFile();
//	} 
//	
//	String yazi= "bu bir yazi dosyasıdır...\nMerhaba\nXXXX\nYYYY\nğğüüüçççIII\n";
//	FileOutputStream cikti = new FileOutputStream(file);
//	OutputStreamWriter yazici = new OutputStreamWriter(cikti,"utf-8"); //türkçe karakter destekledi
//	
//	yazici.write(yazi);
//	yazici.flush(); // geride kalan herşeyi yolla
//	yazici.close(); // kapat!
	
		
//		//dosya okuma
		FileInputStream girdi = new FileInputStream(file);
		InputStreamReader okuyucu = new InputStreamReader(girdi,"utf-8");
		
		StringBuffer buffer = new StringBuffer();
		int c=0;
		while((c=okuyucu.read())!=-1)
		{
			buffer.append((char)c);
		}
		okuyucu.close();
		System.out.println(buffer.toString());
	}
	catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
}
}
