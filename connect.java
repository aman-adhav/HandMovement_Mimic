package SendData;

import java.io.*;
import java.net.*;

public class URLConnectionReader {
    public static void main(String[] args) throws Exception {

    	URL url = new URL("http://wossrobotics.ca/hand.php?state=lol");
    	  HttpURLConnection httpCon = (HttpURLConnection) url.openConnection();
    	  httpCon.setDoOutput(true);
    	  httpCon.setRequestMethod("POST");
    	  OutputStreamWriter out = new OutputStreamWriter(
    	      httpCon.getOutputStream());
    	  System.out.println(httpCon.getResponseCode());
    	  System.out.println(httpCon.getResponseMessage());
    	  out.close();
    }
}
