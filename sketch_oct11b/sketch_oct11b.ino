
str input = "hi";

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

str read() { //defines read func
    if (Serial.available() > 0) { // gets input from computer
      input = Serial.read(); // _/\_
      return(input);
    }
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(1, HIGH);
  Serial.write("Which of these is the best choice to stay safe on social media?");
  Serial.write("A----Keep a private account.");
  Serial.write("B----Share your real name with strangers.");
  Serial.write("C----Sell your soul on eBay.");
  //write if statement
  if(read() == "a"){
    Serial.write("YOUR RIGHT!!!!!!");
  } else {
    Serial.write("FAKE NEWS!!!!!!!");
    loop();
  }
}
