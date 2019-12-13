*/  
  No libraries needed for this
  I want to create a code for controlling an RGB LED with arduino to make custom color lights. This will help later with RGB LED
  strips and controlling other PWM items.
/*

// initialize pins 9-11 all pwm pins to adust the "frequency"
int R_pin= 9;
int G_pin = 10;
int B_pin = 11;

// the setup function runs once when you press reset or power the board
void setup() {
  // set pins to to output for each of them
  pinMode(R_pin, OUTPUT);
  pinMode(G_pin, OUTPUT);
  pinMode(B_pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  RGB_color(255, 0, 0); // Red
  delay(1000); // wait for a second before next command
  RGB_color(206, 226, 255); // blue light from space engineers
  delay(1000); // wait for a second before next command
  RGB_color(255, 126, 0); // automotive amber
  delay(1000); // wait for a second before next command
}

void RGB_color(int R_value, int G_value, int B_value)
 {
  analogWrite(R_pin, R_value);
  analogWrite(G_pin, G_value);
  analogWrite(B_pin, B_value);
}
