char answr[1];
int k = 0;
void setup() {
  // put your setup code here, to run once:
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
  pinMode(1, OUTPUT);//magnet
  Serial.begin(9600); //intiates comunication with the computer
  Serial.write("type the lowercase letter corosponding to the answer you deem corect"); // sends stuff to computer
  Serial.write("pardon my speejling");
}

/*void read(String &dest) { //defines read func
    
}*/

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(1, HIGH);
  Serial.write("Which of these is the best choice to stay safe on social media?\n");
  Serial.write("A----Keep a private account.\n");
  Serial.write("B----Share your real name with strangers.\n");
  Serial.write("C----Sell your soul on eBay.\n");
  while(k < 1) {
    if (Serial.available() > 0) { // gets input from computer
      answr[1] = Serial.read(); // _/\_
      k = 1;
    }
  }
  k = 0;
  if(answr[1] == "a\n"){
    Serial.write("YOUR RIGHT!!!!!!\n");
  } else {
    Serial.write("FAKE NEWS!!!!!!!\n");
    loop();
  }
}
