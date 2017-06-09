#include <Servo.h> 
 
Servo myservoa, myservob, myservoc, myservod, myservoe;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;
int servodata;

void setup()  {
  myservoa.attach(8);
  myservob.attach(9);
  myservoc.attach(10);
  myservod.attach(11);
  myservoe.attach(12);
}

void loop()   
{
     for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
delay(200);
  {                                  // in steps of 1 degree 
    myservoa.write(pos);  // tell servo to go to position in variable 'pos' 
    delay(1);                       // waits 15ms for the servo to reach the position
  } 
  delay(200);
  {myservob.write(pos);
  delay(5);
  }
  delay(200);
  {myservoc.write(pos);
  delay(5);
  }
  delay(200);
  {myservod.write(pos);
  delay(5);
  }
  delay(200);
  {myservoe.write(pos);
  delay(5);
  }
  delay(200);
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservoa.write(pos);  // tell servo to go to position in variable 'pos' 
    delay(1);                       // waits 15ms for the servo to reach the position 
  } 
  delay(200);
  { myservob.write(pos);
  delay(5);
  }
  delay(200);
  { myservoc.write(pos);
  delay(5);
  }
  delay(200);
  {myservod.write(pos);
  delay(5);
  }
  {myservoe.write(pos);
  delay(5);
  }
  delay(4800000);
    {                                  // in steps of 1 degree 
    myservoa.write(pos);  // tell servo to go to position in variable 'pos' 
    delay(1);                       // waits 15ms for the servo to reach the position
  } 
  delay(200);
  {myservob.write(pos);
  delay(5);
  }
  delay(200);
  {myservoc.write(pos);
  delay(5);
  }
  delay(200);
  {myservod.write(pos);
  delay(5);
  }
  delay(200);
  {myservoe.write(pos);
  delay(5);
  }
  delay(200);
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservoa.write(pos);  // tell servo to go to position in variable 'pos' 
    delay(1);                       // waits 15ms for the servo to reach the position 
  } 
  delay(200);
  { myservob.write(pos);
  delay(5);
  }
  delay(200);
  { myservoc.write(pos);
  delay(5);
  }
  delay(200);
  {myservod.write(pos);
  delay(5);
  }
  {myservoe.write(pos);
  delay(5);
  }
  delay(4800000);
    {                                  // in steps of 1 degree 
    myservoa.write(pos);  // tell servo to go to position in variable 'pos' 
    delay(1);                       // waits 15ms for the servo to reach the position
  } 
  delay(200);
  {myservob.write(pos);
  delay(5);
  }
  delay(200);
  {myservoc.write(pos);
  delay(5);
  }
  delay(200);
  {myservod.write(pos);
  delay(5);
  }
  delay(200);
  {myservoe.write(pos);
  delay(5);
  }
  delay(200);
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservoa.write(pos);  // tell servo to go to position in variable 'pos' 
    delay(1);                       // waits 15ms for the servo to reach the position 
  } 
  delay(200);
  { myservob.write(pos);
  delay(5);
  }
  delay(200);
  { myservoc.write(pos);
  delay(5);
  }
  delay(200);
  {myservod.write(pos);
  delay(5);
  }
  {myservoe.write(pos);
  delay(5);
  }
  delay(4800000);
    {                                  // in steps of 1 degree 
    myservoa.write(pos);  // tell servo to go to position in variable 'pos' 
    delay(1);                       // waits 15ms for the servo to reach the position
  } 
  delay(200);
  {myservob.write(pos);
  delay(5);
  }
  delay(200);
  {myservoc.write(pos);
  delay(5);
  }
  delay(200);
  {myservod.write(pos);
  delay(5);
  }
  delay(200);
  {myservoe.write(pos);
  delay(5);
  }
  delay(200);
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservoa.write(pos);  // tell servo to go to position in variable 'pos' 
    delay(1);                       // waits 15ms for the servo to reach the position 
  } 
  delay(200);
  { myservob.write(pos);
  delay(5);
  }
  delay(200);
  { myservoc.write(pos);
  delay(5);
  }
  delay(200);
  {myservod.write(pos);
  delay(5);
  }
  {myservoe.write(pos);
  delay(5);
  }
  delay(4800000);
    {                                  // in steps of 1 degree 
    myservoa.write(pos);  // tell servo to go to position in variable 'pos' 
    delay(1);                       // waits 15ms for the servo to reach the position
  } 
  delay(200);
  {myservob.write(pos);
  delay(5);
  }
  delay(200);
  {myservoc.write(pos);
  delay(5);
  }
  delay(200);
  {myservod.write(pos);
  delay(5);
  }
  delay(200);
  {myservoe.write(pos);
  delay(5);
  }
  delay(200);
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservoa.write(pos);  // tell servo to go to position in variable 'pos' 
    delay(1);                       // waits 15ms for the servo to reach the position 
  } 
  delay(200);
  { myservob.write(pos);
  delay(5);
  }
  delay(200);
  { myservoc.write(pos);
  delay(5);
  }
  delay(200);
  {myservod.write(pos);
  delay(5);
  }
  {myservoe.write(pos);
  delay(5);
  }
  delay(86400000);
    }      
