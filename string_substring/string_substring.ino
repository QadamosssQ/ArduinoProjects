void setup() {

  Serial.begin(9600);
  
  String hello = "hello/world";

  Serial.println(hello);
  
  hello.replace("/", "");

  Serial.println(hello);
  
  Serial.println(hello.substring(0,5));



  String html = "http://192.168.0.37/rgb/123123123";

  String r =
  String g =
  String b =




  
}

void loop() {
  // put your main code here, to run repeatedly:

}
