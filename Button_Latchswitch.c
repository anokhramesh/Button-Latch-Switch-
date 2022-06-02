
#define SW1 PORTD.RD4

#define SW2 PORTD.RD5

#define SW3 PORTD.RD6

#define SW4 PORTD.RD7

void main() {

     TRISB = 0X00;

     PORTB = 0X00;            // Clear PORTB

     while(1){

              if(SW1==1){

                         PORTB.F0 = ~PORTB.F0;    // Toggle RB0

                         while(SW1==1);     // switch debounce

                         }

              if(SW2==1){

                         PORTB.F1 = ~PORTB.F1;    // Toggle RB1

                         while(SW2==1);        // Switch debounce

                         }

              if(SW3==1){

                         PORTB.F2 = ~PORTB.F2;     // Toggle RB2

                         while(SW3==1);           // Switch debounce

                         }

              if(SW4==1){

                         PORTB.F3 = ~PORTB.F3;      // Toggle RB3

                         while(SW4==1);            // Switch debounce

                         }

              }







}
