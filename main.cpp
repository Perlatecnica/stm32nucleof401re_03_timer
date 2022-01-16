/* Copyright (c) 2022 Perlatecnica APS ETS
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/****************************************************
*            RAPID PROTOTYPING WITH NUCLEO          *
* Example Code 03: Timer                            *
* Author: Mauro D'Angelo                            *
* Organization: Perlatecnica APS ETS                *
*****************************************************/
/* Serial Client configuration                       *
* 9600 bauds, 8-bit data, no parity                  *
*****************************************************/

#include "mbed.h"

// It creates an instance of the Timer class. From now on, we can refer to the timer through its instance
Timer timer;


DigitalOut myled(LED1);

// Entry point
int main() {
  // The timer is started calling its method 'start'. We refer to the Timer by the name of the instance
  timer.start();

  // It print to the serial client a string
  printf("It works!\r\n");

  // Infinite loop. The instructions in the loop will be repeated forever
  while(1) { 
      ThisThread::sleep_for(1000ms);

      // The timer is read calling its method elapsed_time. It returns the elapsed time in microseconds
      printf("This program runs since %d seconds.\r\n", (int)(timer.elapsed_time().count()/1000000));

      // It change the led status. We will see the led blinking
      myled = !myled;
  }
}
 
// EXERCISE: Reset the board and look what happens
// EXERCISE: Print the main loop cycle execution time 

