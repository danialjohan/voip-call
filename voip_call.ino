#include <ESP8266WiFi.h>

WiFiClient client;

String MakerIFTTT_Key = "paste_your_IFTTT_key";
String MakerIFTTT_Event = "enter_your_event_name";

void setup() {
  Serial.begin(9600);
  WiFi.disconnect();
  delay(3000);
  Serial.println("START");

  WiFi.begin("enter_your_wifi_name","enter_your_wifi_password");

  while (!(WiFi.status() == WL_CONNECTED)){
    delay(300);
    Serial.print(".");
  }

  Serial.println("Connected");
  Serial.println("Your IP is");
  Serial.println(WiFi.localIP());

  // POST request to IFTTT webhook
  if (client.connect("maker.ifttt.com",80)) {
    String json = "{\"value1\":\"Enter_here_what_you_want_to_display\",\"value2\":\"\",\"value3\":\"\"}";
    String post_rqst = "POST /trigger/" + MakerIFTTT_Event + "/with/key/" + MakerIFTTT_Key + " HTTP/1.1\r\n" +
                       "Host: maker.ifttt.com\r\n" +
                       "Content-Type: application/json\r\n" +
                       "Content-Length: " + String(json.length()) + "\r\n" +
                       "\r\n" + json;
    client.print(post_rqst);
  }
}

void loop() {
}
