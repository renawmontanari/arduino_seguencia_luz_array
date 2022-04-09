int led[7] = { 10, 9, 8, 7, 6, 5, 4 };
            // 0   1  2  3  4  5  6       vetor(array)
void setup() {
    pinMode(led[0], OUTPUT);
    pinMode(led[1], OUTPUT);
    pinMode(led[2], OUTPUT);
    pinMode(led[3], OUTPUT);
    pinMode(led[4], OUTPUT);
    pinMode(led[5], OUTPUT);
    pinMode(led[6], OUTPUT);
}

void loop() {
    for (int i = 0; i <= 6; i++){
        digitalWrite(led[i], HIGH);
        delay(500);
        digitalWrite(led[i], LOW);
        delay(500);
    }
  
  	for (int i = 6; i >= 0; i--) {
    	digitalWrite(led[i], HIGH);
        delay(500);
        digitalWrite(led[i], LOW);
        delay(500);
  }
}