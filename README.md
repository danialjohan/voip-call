
#EARTHQUAKE DETECTOR USING ESP8266 AND IFTTT
   This code is for an earthquake detector using an ESP8266 microcontroller and IFTTT (If This Then That) webhooks. The ESP8266 connects to the internet via Wi-Fi and sends a POST request to the IFTTT webhook to trigger an event when an earthquake is detected.

#PREREQUISITE
   ESP8266 board
   Arduino IDE
   ESP8266WiFi library
   An active Wi-Fi connection
   Maker IFTTT account

#SETTING UP IFTTT
   ● Go to the IFTTT website and create an account.
   ● Create a new applet by clicking on the "Create" button.
   ● Select "Webhooks" as the trigger service and choose "Receive a web request".
   ● Give the event a name (e.g., "earthquake_detector").
   ● Choose "Notifications" as the action service and select the notification method you want (e.g., sending an email or a text message).
   ● Customize the notification message with the desired text.

#SETTING UP THE ESP8266
   ● Open the Arduino IDE and create a new sketch.
   ● Include the ESP8266WiFi library by adding #include <ESP8266WiFi.h> at the beginning of the code.
   ● Replace the MakerIFTTT_Key variable with your IFTTT Maker key, which can be found in your Maker Webhooks settings.
   ● Replace the MakerIFTTT_Event variable with the name of the event you created in IFTTT (e.g., "earthquake_detector").
   ● Connect the ESP8266 to your Wi-Fi network by modifying the WiFi.begin function with the appropriate SSID and password.
   ● Upload the code to the ESP8266 and open the serial monitor to view the output.

#HOW IT WORKS
   The ESP8266 connects to the Wi-Fi network and sends a POST request to the IFTTT webhook with a JSON payload containing the notification message. When the webhook receives the request, it triggers the event and sends the notification to the desired channel (e.g., email or text message).

#TROUBLESHOOTING 
   ● If the ESP8266 is not connecting to the Wi-Fi network, make sure the SSID and password are correct.
   ● If the webhook is not triggering, make sure the Maker key and event name are correct and that the applet is turned on in IFTTT.
   ● If the notification message is not being sent, check the notification settings in the IFTTT applet.
#LICENSE 
   This code is released under the MIT License.
