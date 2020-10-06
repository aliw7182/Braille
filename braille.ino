void setup() {
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
pinMode(3, OUTPUT);
pinMode(2, OUTPUT);
Serial.begin(9600);

}

void loop() {

String str ;
str = Serial.readString();
Serial.println(str);
int str_len = str.length();

for (int i = 0; i < str_len;i++) {
    Serial.println(i); 
   }
char ch = str[0];
if ((ch == 'a')||(ch == 'A')) {
letterA();
}
else if ((ch == 'b') || (ch == 'B')) {
letterB();

}
else if ((ch == 'c') || (ch == 'C')) {
letterC();
}
else if ((ch == 'd') || (ch == 'D')) {
letterD();
}
else if ((ch == 'e') || (ch == 'E')) {
letterE();
}
else if ((ch == 'f') || (ch == 'F')) {
letterF();
}
else if ((ch == 'g') || (ch == 'G')) {
letterG();
}
else if ((ch == 'h') || (ch == 'h')) {
letterH();
}
else if ((ch == 'i') || (ch == 'I')) {
letterI();
}
else if ((ch == 'j') || (ch == 'J')) {
letterJ();
}
else if ((ch == 'k') || (ch == 'K')) {
letterK();
}
else if ((ch == 'l') || (ch == 'L')) {
letterL();
}
else if ((ch == 'm') || (ch == 'M')) {
letterM();
}
else if ((ch == 'n') || (ch == 'N')) {
letterN();
}
else if ((ch == 'o') || (ch == 'O')) {
letterO();
}
else if ((ch == 'p') || (ch == 'P')) {
letterP();
}
else if ((ch == 'q') || (ch == 'Q')) {
letterQ();
}
else if ((ch == 'r') || (ch == 'R')) {
letterR();
}
else if ((ch == 's') || (ch == 'S')) {
letterS();
}
else if ((ch == 't') || (ch == 'T')) {
letterT();
}
else if ((ch == 'u') || (ch == 'U')) {
letterU();
}
else if ((ch == 'v') || (ch == 'V')) {
letterV();
}
else if ((ch == 'w') || (ch == 'W')) {
letterW();
}
else if ((ch == 'x') || (ch == 'X')) {
letterX();
}
else if ((ch == 'y') || (ch == 'Y')) {
letterY();
}
else if ((ch == 'z') || (ch == 'Z')) {
letterZ();
}
char ch1 = str[1];
if ((ch1 == 'a')||(ch1 == 'A')) {
letterA1();
}
else if ((ch1 == 'b') || (ch1 == 'B')) {
letterB1();
}
else if ((ch1 == 'c') || (ch1 == 'C')) {
letterC1();
}
else if ((ch1 == 'd') || (ch1 == 'D')) {
letterD1();
}
else if ((ch1 == 'e') || (ch1 == 'E')) {
letterE1();
}
else if ((ch1 == 'f') || (ch1 == 'F')) {
letterF1();
}
else if ((ch1 == 'g') || (ch1 == 'G')) {
letterG1();
}
else if((ch1 == 'h') || (ch1 == 'h')) {
letterH1();
}
else if ((ch1 == 'i') || (ch1 == 'I')) {
letterI1();
}
else if ((ch1 == 'j') || (ch1 == 'J')) {
letterJ1();
}
else if ((ch1 == 'k') || (ch1 == 'K')) {
letterK1();
}
else if ((ch1 == 'l') || (ch1 == 'L')) {
letterL1();
}
else if ((ch1 == 'm') || (ch1 == 'M')) {
letterM1();
}
else if ((ch1 == 'n') || (ch1 == 'N')) {
letterN1();
}
else if ((ch1 == 'o') || (ch1 == 'O')) {
letterO1();
}
else if ((ch1 == 'p') || (ch1 == 'P')) {
letterP1();
}
else if ((ch1 == 'q') || (ch1 == 'Q')) {
letterQ1();
}
else if ((ch1 == 'r') || (ch1 == 'R')) {
letterR1();
}
else if ((ch1 == 's') || (ch1 == 'S')) {
letterS1();
}
else if ((ch1 == 't') || (ch1 == 'T')) {
letterT1();
}
else if ((ch1 == 'u') || (ch1 == 'U')) {
letterU1();
}
else if ((ch1 == 'v') || (ch1 == 'V')) {
letterV1();
}
else if ((ch1 == 'w') || (ch1 == 'W')) {
letterW1();
}
else if ((ch1 == 'x') || (ch1 == 'X')) {
letterX1();
}
else if ((ch1 == 'y') || (ch1 == 'Y')) {
letterY1();
}
else if ((ch1 == 'z') || (ch1 == 'Z')) {
letterZ1();
}

char ch2 = str[2];
if ((ch2 == 'a')||(ch2 == 'A')) {
letterA2();
}
else if ((ch2 == 'b') || (ch2 == 'B')) {
letterB2();
}
else if ((ch2 == 'c') || (ch2 == 'C')) {
letterC2();
}
else if ((ch2 == 'd') || (ch2 == 'D')) {
letterD2();
}
else if ((ch2 == 'e') || (ch2 == 'E')) {
letterE2();
}
else if ((ch2 == 'f') || (ch2 == 'F')) {
letterF2();
}
else if ((ch2 == 'g') || (ch2 == 'G')) {
letterG2();
}
else if((ch2 == 'h') || (ch2 == 'h')) {
letterH2();
}
else if ((ch2 == 'i') || (ch2 == 'I')) {
letterI2();
}
else if ((ch2 == 'j') || (ch2 == 'J')) {
letterJ2();
}
else if ((ch2 == 'k') || (ch2 == 'K')) {
letterK2();
}
else if ((ch2 == 'l') || (ch2 == 'L')) {
letterL2();
}
else if ((ch2 == 'm') || (ch2 == 'M')) {
letterM2();
}
else if ((ch2 == 'n') || (ch2 == 'N')) {
letterN2();
}
else if ((ch2 == 'o') || (ch2 == 'O')) {
letterO2();
}
else if ((ch2 == 'p') || (ch2 == 'P')) {
letterP2();
}
else if ((ch2 == 'q') || (ch2 == 'Q')) {
letterQ2();
}
else if ((ch2 == 'r') || (ch2 == 'R')) {
letterR2();
}
else if ((ch2 == 's') || (ch2 == 'S')) {
letterS2();
}
else if ((ch2 == 't') || (ch2 == 'T')) {
letterT2();
}
else if ((ch2 == 'u') || (ch2 == 'U')) {
letterU2();
}
else if ((ch2 == 'v') || (ch2 == 'V')) {
letterV2();
}
else if ((ch2 == 'w') || (ch2 == 'W')) {
letterW2();
}
else if ((ch2 == 'x') || (ch2 == 'X')) {
letterX2();
}
else if ((ch2 == 'y') || (ch2 == 'Y')) {
letterY2();
}
else if ((ch2 == 'z') || (ch2 == 'Z')) {
letterZ2();
}

char ch3 = str[3];
if ((ch3 == 'a')||(ch3 == 'A')) {
letterA3();
}
else if ((ch3 == 'b') || (ch3 == 'B')) {
letterB3();
}
else if ((ch3 == 'c') || (ch3 == 'C')) {
letterC3();
}
else if ((ch3 == 'd') || (ch3 == 'D')) {
letterD3();
}
else if ((ch3 == 'e') || (ch3 == 'E')) {
letterE3();
}
else if ((ch3 == 'f') || (ch3 == 'F')) {
letterF3();
}
else if ((ch3 == 'g') || (ch3 == 'G')) {
letterG3();
}
else if((ch3 == 'h') || (ch3 == 'h')) {
letterH3();
}
else if ((ch3 == 'i') || (ch3 == 'I')) {
letterI3();
}
else if ((ch3 == 'j') || (ch3 == 'J')) {
letterJ3();
}
else if ((ch3 == 'k') || (ch3 == 'K')) {
letterK3();
}
else if ((ch3 == 'l') || (ch3 == 'L')) {
letterL3();
}
else if ((ch3 == 'm') || (ch3 == 'M')) {
letterM3();
}
else if ((ch3 == 'n') || (ch3 == 'N')) {
letterN3();
}
else if ((ch3 == 'o') || (ch3 == 'O')) {
letterO3();
}
else if ((ch3 == 'p') || (ch3 == 'P')) {
letterP3();
}
else if ((ch3 == 'q') || (ch3 == 'Q')) {
letterQ3();
}
else if ((ch3 == 'r') || (ch3 == 'R')) {
letterR3();
}
else if ((ch3 == 's') || (ch3 == 'S')) {
letterS3();
}
else if ((ch3 == 't') || (ch3 == 'T')) {
letterT3();
}
else if ((ch3 == 'u') || (ch3 == 'U')) {
letterU3();
}
else if ((ch3 == 'v') || (ch3 == 'V')) {
letterV3();
}
else if ((ch3 == 'w') || (ch3 == 'W')) {
letterW3();
}
else if ((ch3 == 'x') || (ch3 == 'X')) {
letterX3();
}
else if ((ch3 == 'y') || (ch3 == 'Y')) {
letterY3();
}
else if ((ch3 == 'z') || (ch3 == 'Z')) {
letterZ3();
}

delay(5000);
}
}
void letterA() {
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
digitalWrite(5, HIGH);
digitalWrite(4, HIGH);
digitalWrite(3, HIGH);
digitalWrite(2, HIGH);
}
void letterB() {
digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, HIGH);
digitalWrite(4, HIGH);
digitalWrite(3, HIGH);
digitalWrite(2, HIGH);
}
void letterC() {
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
digitalWrite(5, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(2, HIGH);
}
void letterD() {
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
digitalWrite(5, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(2, HIGH);
}
void letterE() {
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
digitalWrite(5, HIGH);
digitalWrite(4, HIGH);
digitalWrite(3, LOW);
digitalWrite(2, HIGH);
}
void letterF() {
digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(2, HIGH);
}
void letterG() {
digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(2, HIGH);
}
void letterH() {
digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, HIGH);
digitalWrite(4, HIGH);
digitalWrite(3, LOW);
digitalWrite(2, HIGH);
}
void letterI() {
digitalWrite(7, HIGH);
digitalWrite(6, LOW);
digitalWrite(5, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(2, HIGH);
}
void letterJ() {
digitalWrite(7, HIGH);
digitalWrite(6, LOW);
digitalWrite(5, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(2, HIGH);
}
void letterK() {
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
digitalWrite(5, LOW);
digitalWrite(4, HIGH);
digitalWrite(3, HIGH);
digitalWrite(2, HIGH);
}
void letterL() {
digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, LOW);
digitalWrite(4, HIGH);
digitalWrite(3, HIGH);
digitalWrite(2, HIGH);
}
void letterM() {
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
digitalWrite(5, LOW);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(2, HIGH);
}
void letterN() {
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
digitalWrite(5, LOW);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(2, HIGH);
}
void letterO() {
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
digitalWrite(5, LOW);
digitalWrite(4, HIGH);
digitalWrite(3, LOW);
digitalWrite(2, HIGH);
}
void letterP() {
digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, LOW);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(2, HIGH);
}
void letterQ() {
digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, LOW);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(2, HIGH);
}
void letterR() {
digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, LOW);
digitalWrite(4, HIGH);
digitalWrite(3, LOW);
digitalWrite(2, HIGH);
}
void letterS() {
digitalWrite(7, HIGH);
digitalWrite(6, LOW);
digitalWrite(5, LOW);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(2, HIGH);
}
void letterT() {
digitalWrite(7, HIGH);
digitalWrite(6, LOW);
digitalWrite(5, LOW);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(2, HIGH);
}
void letterU() {
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
digitalWrite(5, LOW);
digitalWrite(4, HIGH);
digitalWrite(3, HIGH);
digitalWrite(2, LOW);
}
void letterV() {
digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, LOW);
digitalWrite(4, HIGH);
digitalWrite(3, HIGH);
digitalWrite(2, LOW);
}
 
void letterW() {
digitalWrite(7, HIGH);
digitalWrite(6, LOW);
digitalWrite(5, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(2, LOW);
}
void letterX() {
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
digitalWrite(5, LOW);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(2, LOW);
}
void letterY() {
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
digitalWrite(5, LOW);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(2, LOW);
}
void letterZ() {
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
digitalWrite(5, LOW);
digitalWrite(4, HIGH);
digitalWrite(3, LOW);
digitalWrite(2, LOW);
}
void letterA1() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterB1() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterC1() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterD1() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterE1() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterF1() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterG1() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterH1() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterI1() {
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterJ1() {
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterK1() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterL1() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterM1() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterN1() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterO1() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterP1() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterQ1() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterR1() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterS1() {
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterT1() {
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterU1() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, LOW);
}
void letterV1() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, LOW);
} 
void letterW1() {
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
}
void letterX1() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, LOW);
}
void letterY1() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
}
void letterZ1() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
}
void letterA2() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterB2() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterC2() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterD2() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterE2() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterF2() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterG2() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterH2() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterI2() {
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterJ2() {
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterK2() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterL2() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterM2() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterN2() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterO2() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterP2() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterQ2() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterR2() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterS2() {
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterT2() {
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterU2() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, LOW);
}
void letterV2() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, LOW);
} 
void letterW2() {
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
}
void letterX2() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, LOW);
}
void letterY2() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
}
void letterZ2() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
}
void letterA3() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterB3() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterC3() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterD3() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterE3() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterF3() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterG3() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterH3() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterI3() {
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterJ3() {
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterK3() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterL3() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterM3() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterN3() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterO3() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterP3() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterQ3() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterR3() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterS3() {
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
}
void letterT3() {
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
}
void letterU3() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, LOW);
}
void letterV3() {
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, LOW);
} 
void letterW3() {
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
}
void letterX3() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, LOW);
}
void letterY3() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
}
void letterZ3() {
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
}   
