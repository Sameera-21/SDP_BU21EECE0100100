**EMBEDDED_C**
**1\. Bare-Metal LED Toggle**

**Objective**: Create a program that toggles an LED on and off based on a toggle switch input. This aims to demonstrate basic digital input and output handling on a microcontroller.

**Key Learning Points**:

- How to read the state of a digital input pin.
- How to control an LED using a digital output pin.
- Implementing a software-based debouncing mechanism for a toggle switch.

**2\. Analog Output for LED Brightness Control**

**Objective**: Develop a program that changes the brightness of an LED using PWM (Pulse Width Modulation). This demonstrates how to simulate analog output by varying the duty cycle of a digital signal.

**Key Learning Points**:

- Understanding PWM and its use for controlling analog-like outputs.
- Gradually increasing and decreasing the brightness of an LED.
- Using analogWrite to control LED brightness.

**3\. Digital Input for Button Press Detection**

**Objective**: Create a program that reads the state of a pushbutton and turns an LED on or off accordingly. This exercise teaches how to read digital input and use it to control a digital output.

**Key Learning Points**:

- Reading digital input to detect button presses.
- Using conditional statements to control an LED based on the button state.
- Basics of user interaction through pushbuttons.

**4\. LED Control Using Potentiometer (Analog Input)**

**Objective**: Write a program that reads the value of a potentiometer and uses it to adjust the brightness of an LED. This demonstrates how to read analog input and map it to a range suitable for PWM output.

**Key Learning Points**:

- Reading analog values using analogRead.
- Mapping analog input values to PWM output range.
- Real-time control of LED brightness using a potentiometer.

**5\. Analog Output (Alternate Implementation)**

**Objective**: Implement a program to control the brightness of an LED using PWM, iterating through brightness levels in steps. This explores an alternative approach to analog output using a controlled increment and decrement of brightness levels.

**Key Learning Points**:

- Iterating through PWM values to change LED brightness in steps.
- Understanding the effect of delay on perceived brightness changes.
- Further exploration of analogWrite for controlling LED brightness.

**6\. Serial Communication**

**Objective**: Develop a program that uses serial communication to send and receive data between the Arduino and a computer. This program aims to demonstrate basic serial communication capabilities of microcontrollers.

**Key Learning Points**:

- Setting up serial communication using Serial.begin.
- Sending data to the serial monitor with Serial.print and Serial.println.
- Reading data from the serial monitor using Serial.read.

**7\. Timer**

**Objective**: Create a program that uses timers to perform actions at specific intervals without blocking code execution. This aims to teach the use of non-blocking timing mechanisms.

**Key Learning Points**:

- Using the millis function to track elapsed time.
- Implementing non-blocking delays using timing functions.
- Scheduling repetitive actions at specific intervals without using delay.

**8\. Toggle Switch**

**Objective**: Write a program that toggles an LED based on the state of a toggle switch. This exercise demonstrates how to read a toggle switch's position and control an LED accordingly.

**Key Learning Points**:

- Reading the state of a toggle switch using digitalRead.
- Controlling an LED based on the toggle switch state.
- Implementing logic to toggle the LED state with each switch activation.
