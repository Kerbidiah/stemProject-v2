char answr;
int k = 0;

void setup() {
  // put your setup code here, to run once:
  /*
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  */
  pinMode(1, OUTPUT);//magnet
  digitalWrite(1, HIGH);
  Serial.begin(9600); //intiates comunication with the computer
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  Serial.write("type the lowercase letter corosponding to the answer you deem corect\n"); // sends stuff to computer
  Serial.write("pardon my speejling\n");
  Serial.write("change thing in bottom to no line ending\n\n");
}

void loop() {
  thing();
  // a = 97
  // b = 98
  // c = 99
}

void thing() {
  // put your main code here, to run repeatedly:
  Serial.write("Which of these is the best choice to stay safe on social media?\n");
  Serial.write("A----Keep a private account.\n");
  Serial.write("B----Share your real name with strangers.\n");
  Serial.write("C----Sell your soul on eBay.\n");
  while(k < 1) {
    if (Serial.available() > 0) { // gets input from computer
      answr = Serial.read(); // _/\_
      k = 1;
    }
  }
  k = 0;
  Serial.print("I received: ");
  Serial.println(answr, DEC);
  Serial.write("\n\n");
  if(answr == 97) {
    Serial.write("YOUR RIGHT!!!!!!\n");
  } else {
    Serial.write("FAKE NEWS!!!!!!!\n-------------------------------\n");
    thing();
  }
  //   Q2-----------------------------------------------
  Serial.write("Which of the following is the correct definition of copyright?\n");
  Serial.write("A----The exclusive legal right, given to an originator or an assignee to print, publish, perform, film, or record literary, artistic, or musical material, and to authorize others to do the same.\n");
  Serial.write("B----A symbol, word, or words registered to use to represent a company or product.\n");
  Serial.write("C----A government license conferring a right or title for a set period, especially the sole right to exclude others from making, using, or selling an invention.\n");
  while(k < 1) {
    if (Serial.available() > 0) { // gets input from computer
      answr = Serial.read(); // _/\_
      k = 1;
    }
  }
  k = 0;
  Serial.print("I received: ");
  Serial.println(answr, DEC);
  Serial.write("\n\n");
  if(answr == 99) {
    Serial.write("YOUR RIGHT!!!!!!\n");
  } else {
    Serial.write("FAKE NEWS!!!!!!!\n-------------------------------\n");
    thing();
  }
  //----------------------------------------------------
  Serial.write("What is the strongest password choice?\n");
  Serial.write("A----michaelsong\n");
  Serial.write("B----MasterCringeLard\n");
  Serial.write("C----(*&p@$$powpowl0@F<{17)\n");
  while(k < 1) {
    if (Serial.available() > 0) { // gets input from computer
      answr = Serial.read(); // _/\_
      k = 1;
    }
  }
  k = 0;
  Serial.print("I received: ");
  Serial.println(answr, DEC);
  Serial.write("\n\n");
  if(answr == 99) {
    Serial.write("YOUR RIGHT!!!!!!\n");
  } else {
    Serial.write("FAKE NEWS!!!!!!!\n-------------------------------\n");
    thing();
  }
  //----------------------------------------------------
  Serial.write("What is a Geotag?\n");
  Serial.write("A----I give up already.\n");
  Serial.write("B----It is a tag on an online photo, often on social media, stating the time and the location where the picture was taken\n");
  Serial.write("C----Isabella’s strange fetish of eating cardboard scraps\n");
  while(k < 1) {
    if (Serial.available() > 0) { // gets input from computer
      answr = Serial.read(); // _/\_
      k = 1;
    }
  }
  k = 0;
  Serial.print("I received: ");
  Serial.println(answr, DEC);
  Serial.write("\n\n");
  if(answr == 98) {
    Serial.write("YOUR RIGHT!!!!!!\n");
  } else {
    Serial.write("FAKE NEWS!!!!!!!\n-------------------------------\n");
    thing();
  }
  //----------------------------------------------------
  Serial.write("Name a real social media company.\n");
  Serial.write("B----Snapstagram\n");
  Serial.write("C----Instachat\n");
  Serial.write("A----Reddit\n");
  while(k < 1) {
    if (Serial.available() > 0) { // gets input from computer
      answr = Serial.read(); // _/\_
      k = 1;
    }
  }
  k = 0;
  Serial.print("I received: ");
  Serial.println(answr, DEC);
  Serial.write("\n\n");
  if(answr == 97) {
    Serial.write("YOUR RIGHT!!!!!!\n");
  } else {
    Serial.write("FAKE NEWS!!!!!!!\n-------------------------------\n");
    thing();
  }
  //----------------------------------------------------
  Serial.write("Is cyberbullying socially acceptable?\n");
  Serial.write("A----Yes! It’s so fun!\n");
  Serial.write("B----I guess, if the victim doesn’t know who the bully is.\n");
  Serial.write("C----No. It hurts others feelings and can cause long-term damage.\n");
  while(k < 1) {
    if (Serial.available() > 0) { // gets input from computer
      answr = Serial.read(); // _/\_
      k = 1;
    }
  }
  k = 0;
  Serial.print("I received: ");
  Serial.println(answr, DEC);
  Serial.write("\n\n");
  if(answr == 99) {
    Serial.write("YOUR RIGHT!!!!!!\n");
  } else {
    Serial.write("FAKE NEWS!!!!!!!\n-------------------------------\n");
    thing();
  }



  digitalWrite(1, LOW);
}
