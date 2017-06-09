
// Handy.java
// Aman Adhav

/* Detect users hand using the webcam 

   Usage:
   > run Handy
*/

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.io.*;

import com.googlecode.javacv.*;
import com.googlecode.javacv.cpp.*;
import com.googlecode.javacpp.Loader;


public class Handy extends JFrame 
{
  // GUI components
  private HandPanel handPanel;


  public Handy()
  {
    super("Hand Detector");

    Container c = getContentPane();
    c.setLayout( new BorderLayout() );   

    // Preload the opencv_objdetect module to work around a known bug.
    Loader.load(opencv_objdetect.class);

    handPanel = new HandPanel(); // the webcam pictures and drums appear here
    c.add( handPanel, BorderLayout.CENTER);

    addWindowListener( new WindowAdapter() {
      public void windowClosing(WindowEvent e)
      { handPanel.closeDown();    // stop snapping pics, and any drum playing
        System.exit(0);
      }
    });

    setResizable(false);
    pack();  
    setLocationRelativeTo(null);
    setVisible(true);
  } // end of Handy()


  // -------------------------------------------------------

  public static void main( String args[] )
  {  new Handy();  }

} // end of Handy class
