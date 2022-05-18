// Data Structure
bool data[6];

// LED Pins
int M00 = A0;
int M01 = 12;
int M10 = A1;
int M11 = 11;
int M20 = A2;
int M21 = 10;

// Button Pins
int Button00 = 2;
int Button01 = 6;
int Button10 = 3;
int Button11 = 7;
int Button20 = 4;
int Button21 = 8;
// Special buttons
int enterButton = 9;
int spaceButton = 5;

// Buzzer Pin
int Buzzer = A3;

// Stores all the alphabet characters
char englishCharacters[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '#'};

// Stores boolean interpretation of alphabets
bool boolCharacters[27][6] = {{1, 0, 0, 0, 0, 0},  //A
                              {1, 0, 1, 0, 0, 0},  //B
                              {1, 1, 0, 0, 0, 0},  //C
                              {1, 1, 0, 1, 0, 0},  //D
                              {1, 0, 0, 1, 0, 0},  //E
                              {1, 1, 1, 0, 0, 0},  //F
                              {1, 1, 1, 1, 0, 0},  //G
                              {1, 0, 1, 1, 0, 0},  //H
                              {0, 1, 1, 0, 0, 0},  //I
                              {0, 1, 1, 1, 0, 0},  //J
                              {1, 0, 0, 0, 1, 0},  //K
                              {1, 0, 1, 0, 1, 0},  //L
                              {1, 1, 0, 0, 1, 0},  //M
                              {1, 1, 0, 1, 1, 0},  //N
                              {1, 0, 0, 1, 1, 0},  //O
                              {1, 1, 1, 0, 1, 0},  //P
                              {1, 1, 1, 1, 1, 0},  //Q
                              {1, 0, 1, 1, 1, 0},  //R
                              {0, 1, 1, 0, 1, 0},  //S
                              {0, 1, 1, 1, 1, 0},  //T
                              {1, 0, 0, 0, 1, 1},  //U
                              {1, 0, 1, 0, 1, 1},  //V
                              {0, 1, 1, 1, 0, 1},  //W
                              {1, 1, 0, 0, 1, 1},  //X
                              {1, 1, 0, 1, 1, 1},  //Y
                              {1, 0, 0, 1, 1, 1},  //Z
                              {0, 1, 0, 1, 1, 1},  //#
                             };

// Resets the data array
void resetData(void){
  data[0] = 0;
  data[1] = 0;
  data[2] = 0;
  data[3] = 0;
  data[4] = 0;
  data[5] = 0;
}

// Read buttons
void readData(void){
  bool temp = 0;
  temp = digitalRead(Button00);
  if(temp == 1){
    data[0] = 1;
    temp = 0;
  }
  temp = digitalRead(Button01);
  if(temp == 1){
    data[1] = 1;
    temp = 0;
  }
  temp = digitalRead(Button10);
  if(temp == 1){
    data[2] = 1;
    temp = 0;
  }
  temp = digitalRead(Button11);
  if(temp == 1){
    data[3] = 1;
    temp = 0;
  }
  temp = digitalRead(Button20);
  if(temp == 1){
    data[4] = 1;
    temp = 0;
  }
  temp = digitalRead(Button21);
  if(temp == 1){
    data[5] = 1;
    temp = 0;
  }
}

// Control Leds
void turnLed(void){
  digitalWrite(M00, data[0]);
  digitalWrite(M01, data[1]);
  digitalWrite(M10, data[2]);
  digitalWrite(M11, data[3]);
  digitalWrite(M20, data[4]);
  digitalWrite(M21, data[5]);
}

// Reset LEDs
void resetLed(void){
  resetData();
  turnLed();
}

// Compares for valid input
bool compare(int j){
  for (int i = 0; i < 6; i++) {
    if(data[i] != boolCharacters[j][i]){
      return(0);
    }
  }
  return(1);
}

// Finds character
int findCharacter(void){
  for (int i = 0; i < 27; i++) {
    if(compare(i)){
      return(i);
    }
  }
  return(-1);
}

// Assigns Data a value of a character
void assignData(bool character[6]){
  for(int i = 0;i<6;i++){
    data[i] = character[i];
  }
}

// Show character
void showCharacter(char t){
  resetLed();
  int temp = 0;
  for(int i = 0;i<27;i++){
    if(t == englishCharacters[i]){
      temp = i;
    }
  }
  assignData(boolCharacters[temp]);
  turnLed();
}

// Beep buzzer
void beep(int n, int t){
  for(int i = 0;i < n;i++){
    digitalWrite(Buzzer, HIGH);
    delay(t);
    digitalWrite(Buzzer, LOW);
    delay(t);
  }
}

// Runs once on startup/reset
void setup(void) {
  // Initialising Pins
  pinMode(M00, OUTPUT);
  pinMode(M01, OUTPUT);
  pinMode(M10, OUTPUT);
  pinMode(M11, OUTPUT);
  pinMode(M20, OUTPUT);
  pinMode(M21, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(Button00, INPUT);
  pinMode(Button01, INPUT);
  pinMode(Button10, INPUT);
  pinMode(Button11, INPUT);
  pinMode(Button20, INPUT);
  pinMode(Button21, INPUT);
  pinMode(enterButton, INPUT);
  pinMode(spaceButton, INPUT);
  resetData();
  
  // Initialising serial comm
  Serial.begin(9600); 

  // Starting beep
  beep(4, 60);
}

// Runs in infinite loop
void loop(void) {
  if(Serial.available()){
    String text;
    int n = 0;
    text = Serial.readStringUntil('\n');
    for(int i = 0;i<text.length()-1;i++){
      showCharacter(text[i]);
      while(digitalRead(enterButton) != 1);
      delay(500);
      beep(1, 50);
    }
    beep(1, 1000);
    resetLed();
  }
  else{
    readData();
    turnLed();
    if(digitalRead(enterButton)){
      int temp = findCharacter();
      if(temp != -1){
        Serial.print(englishCharacters[temp]);
      }
      beep(1, 100);
      resetData();
      delay(500);
    }
    if(digitalRead(spaceButton)){
      Serial.print(' ');
      resetData();
      beep(1, 50);
      delay(800);
    }
  }
}
