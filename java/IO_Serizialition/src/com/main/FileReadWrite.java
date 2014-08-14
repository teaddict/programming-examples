package com.main;

import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class FileReadWrite {
	public static void main(String[] args) {
		
		try {
			File file =new File("/home/test/test.txt");
		
			/*//dosya yazma
			if(!file.exists())
		{
				file.createNewFile();
		} 
		
		String yazi= "bu bir yazi dosyasıdır...\nMerhaba\nXXXX\nYYYY";
		FileWriter yazici = new FileWriter(file);
		
		yazici.write(yazi);
		yazici.flush(); // geride kalan herşeyi yolla
		yazici.close(); // kapat!
		*/
			
			//dosya okuma
			FileReader okuyucu = new FileReader(file);
			
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

