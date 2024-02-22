# 16-Enero-2024
---
### Evaluación:

| Componente      | Ponderación |
| --------------- | ----------- |
| Proyecto        | 30          |
| Tareas          | 40          |
| Participación   | 30          |
| *Total*       | *100*     |

---
# 23-Enero-2024 (Tarea)
---
# CONCEPTOS BÁSICOS DE SEGURIDAD

por Sofia Ruvalcaba de la Noval

## *CIA Triad*

La tríada de la CIA (Confidencialidad, Integridad y Disponibilidad) es un modelo rector en seguridad de la información. Una estrategia integral de seguridad de la información incluye políticas y controles de seguridad que minimicen las amenazas a estos tres componentes cruciales. 

La tríada de la CIA orienta la seguridad de la información en un sentido amplio y también es útil para gestionar los productos y datos de la investigación.

- **Confidencialidad:**

Se refiere a proteger la información del acceso no autorizado. Mantener la confidencialidad ayuda a lograr múltiples objetivos importantes, incluido garantizar la privacidad y evitar ataques de ransomware. 

Un ejemplo familiar de una estrategia de seguridad institucional que utilizamos para proteger la confidencialidad es iniciar sesión en los sistemas universitarios utilizando su WUSTLKey y WashU 2FA. Este proceso de inicio de sesión y autenticación de identidad protege la confidencialidad de la información creada, almacenada y transferida en nuestros sistemas al restringir el acceso a miembros autorizados de la comunidad WashU. 

Los investigadores pueden proteger su trabajo y sus datos del acceso no autorizado utilizando recursos universitarios a los que solo se puede acceder con una WUSTLKey, protegiendo los archivos de investigación con cifrado y contraseñas y restringiendo el acceso a los datos y recursos de la investigación a miembros capacitados del equipo de investigación.

- **Integridad:**

Integridad significa que los datos son confiables, completos y no han sido alterados o modificados accidentalmente por un usuario no autorizado. La integridad de los datos puede verse comprometida involuntariamente por un mal funcionamiento del sistema, errores al ingresar datos u olvidar mantener una copia de seguridad actualizada. La integridad también puede verse comprometida por actores malintencionados que intentan alterar los datos. Por ejemplo, una estafa de phishing destinada a cambiar los números de ruta de las cuentas bancarias en nuestro sistema de nómina es una amenaza para la integridad de nuestros datos institucionales.

Los investigadores pueden proteger la integridad de sus datos configurando canales seguros para realizar copias de seguridad y compartir datos con usuarios autorizados. Por ejemplo, WUSTL Box, un servicio de almacenamiento en la nube, permite a los usuarios almacenar información en la nube, compartir información de forma segura con usuarios autorizados y controlar quién tiene privilegios de edición para archivos y carpetas específicos. El uso de una carpeta WUSTL Box realiza automáticamente una copia de seguridad en la nube y crea un historial de versiones de los archivos, lo que permite al usuario restaurar un archivo a un estado anterior si es necesario. Colaborar en WUSTL Box es más seguro que compartir archivos adjuntos por correo electrónico o en un dispositivo extraíble como una memoria USB, y WUSTL Box permite a los propietarios de archivos ver un registro de actividad de un archivo específico, lo que facilita la detección de posibles amenazas a la integridad. de datos.

- **Disponibilidad:**

Disponibilidad significa que los datos están accesibles cuando los necesita. La disponibilidad de datos es crucial para las operaciones diarias de nuestra institución. Sin acceso a nuestros datos, todo se paraliza, razón por la cual las instituciones médicas y educativas como WashU suelen ser blanco de ataques de ransomware.

La gestión de datos es de gran importancia para instituciones como WashU. Los ataques de ransomware intentan retener la disponibilidad de información crítica hasta que se pague el rescate. Utilizamos diversas medidas de hardware y software para detectar y prevenir dichos ataques, protegiendo la disponibilidad de nuestros datos. Nuestros usuarios también contribuyen a este esfuerzo detectando y reportando phishing y otras actividades sospechosas.

Los investigadores pueden proteger la disponibilidad de sus datos creando copias de seguridad utilizando los recursos de WashU.

### Resumen:

| **La Triada CIA**                | **Confidencialidad**                                                 | **Integridad**                                                                        | **Disponibilidad**                                                                |
|:--------------------------------:|:--------------------------------------------------------------------:|:-------------------------------------------------------------------------------------:|:---------------------------------------------------------------------------------:|
| ¿Qué es la CIA?                  | La información está a salvo de divulgación accidental o intencional. | La información está a salvo de modificación o alteración accidental o intencional.    | La información está disponible para los usuarios autorizados cuando la necesiten. |
| Ejemplo                          | Te envío un mensaje y nadie más sabe qué es ese mensaje.             | Te envío un mensaje y recibes exactamente lo que te envié (sin ninguna modificación). | Te envío un mensaje y puedes recibirlo.                                           |
| ¿Cuál es el propósito de la CIA? | Los datos no se divulgan                                             | Los datos no se manipulan                                                             | Los datos están disponibles                                                       |
| ¿Cómo puedes lograr la CIA?      | p. ej., Cifrado                                                      | p. ej., Hashing, Firmas digitales                                                     | p. ej., Copias de seguridad, sistemas redundantes                                 |
| Opuesto de la CIA                | Divulgación                                                          | Alteración                                                                            | Destrucción                                                                       |

## *Usability Triangle*

El nivel de seguridad en cualquier sistema se puede definir por la fortaleza de tres componentes: 

- **Funcionalidad:** El conjunto de características proporcionadas por el sistema.

- **Usabilidad:** Los componentes de la GUI utilizados para diseñar el sistema para facilitar su uso. 

- **Seguridad:** Restricciones impuestas al acceso a los componentes del sistema. 

La relación entre estos tres componentes se demuestra mediante el uso de un triángulo porque **"el aumento o la disminución de cualquiera de los componentes afecta automáticamente a los otros dos componentes"**.

## *Riesgo*

El riesgo se calcula evaluando la probabilidad de que ocurra un evento no deseado y el impacto potencial de ese evento. La gestión de riesgos implica identificar, evaluar y mitigar los riesgos a través de la implementación de controles de seguridad y planes de respuesta a incidentes.

## *MFA*

MFA añade capas adicionales de seguridad al requerir múltiples formas de autenticación. Estos factores pueden incluir algo que el usuario sabe (contraseña), algo que el usuario tiene (token de seguridad) y algo que el usuario es (huella digital). Al implementar MFA, incluso si un factor de autenticación se ve comprometido, aún se requiere al menos un factor adicional para acceder al sistema.

## *Vulnerabilidad*

Una vulnerabilidad es una debilidad en un sistema que podría ser explotada por una amenaza para causar daño. Pueden ser el resultado de errores de programación, configuraciones incorrectas o falta de actualizaciones de seguridad. La identificación y corrección de vulnerabilidades son esenciales para mantener la seguridad de un sistema.

## *Amenaza*

Una amenaza es cualquier evento o acción, ya sea intencional o no, que pueda causar daño a un sistema, red o datos. Las amenazas pueden incluir desde ciberataques perpetrados por hackers hasta desastres naturales como incendios o inundaciones. La comprensión de las amenazas es crucial para implementar medidas preventivas y de respuesta efectivas.

## *Impacto*

El impacto representa las consecuencias de una amenaza que se materializa. Puede incluir pérdida de datos, interrupción de servicios, daño a la reputación y pérdidas económicas. La evaluación del impacto ayuda a priorizar la respuesta a incidentes y a asignar recursos de manera efectiva para mitigar los efectos negativos.

---
# 23-Enero-2024
---

## *Terminología escencial*

- Valor de pirateo
Es la noción entre los hackers de que algo vale la pena hacer o es interesante.
- Explotar
Una forma definida de violar la seguridad de un sistema de TI a través de una vulnerabilidad.
- Vulnerabilidad
Existencia de una debilidad, error de diseño o implementación que puede conducir a un evento inesperado e indeseable que comprometa la seguridad del sistema.
- Objetivo de Evaluación
Un sistema, producto o componente de TI que está identificado/sujeto a una evaluación de seguridad requerida.
- Ataque de día cero
Un ataque que explota las vulnerabilidades de las aplicaciones informáticas antes de que el desarrollador del software publique un parche para la vulnerabilidad.
- Conexión en cadena
Los piratas informáticos que se salen con la suya con el robo de bases de datos generalmente completan su tarea y luego retroceden para cubrir sus huellas destruyendo registros, etc.

*Buscar ejemplos de ataque de día cero*
*IDS/IPS*

---
# 15-Febrero-2024
---

# *Parte 1: Pentesting*

## Whittor, Blarbor, Graybor:

- Whittor: Se enfoca en pruebas de caja blanca, donde el pentester tiene acceso al código fuente y la infraestructura interna del sistema.
- Blarbor: Se enfoca en pruebas de caja negra, donde el pentester solo tiene acceso a la interfaz de usuario del sistema.
-Graybor: Es una combinación de pruebas de caja blanca y caja negra.

# *Parte 2: Line*

## Reconocimiento:

- Recopilación de información sobre el objetivo, como direcciones IP, nombres de dominio, nombres de usuario y contraseñas.
- Se pueden usar herramientas como Nmap, Metasploit y Shodan.

# Uni:

- Identificar vulnerabilidades en el sistema objetivo.
- Se pueden usar herramientas como Nessus, OpenVAS y QualysGuard.

# Escanco:

- Obtener acceso al sistema objetivo.
- Se pueden usar herramientas como Metasploit, Hydra y John the Ripper.

# Ganas acceso:

- Mantener el acceso al sistema objetivo.
- Se pueden usar herramientas como Meterpreter, Plink y PuTTY.

# Mantener acceso:

- Cubrir huellas para evitar ser detectado.
- Se pueden usar herramientas como Tor, VPN y Proxychains.

# Cubrir huellas:

- Eliminar rastros de la actividad del pentester en el sistema objetivo.

---
# 06-Febrero-2024
---

## Escalamiento de privilegios:

- Técnica para obtener acceso de administrador mediante la escalada por diferentes capas de acceso.
- Comienza desde la capa de usuario base hasta alcanzar el nivel de administrador.

## Ransomware:

- Software malicioso que encripta los datos del usuario y exige un rescate para su liberación.
- Las variantes conocidas utilizan una combinación de contraseña y clave para la encriptación.

## Medidas para protegerse del ransomware:

- Realizar copias de seguridad regulares (offsite).
- Capacitar al personal sobre la amenaza del ransomware.
- Implementar una estrategia de seguridad por capas.

## Tipos de respaldos:

- Respaldo completo (full): Guarda toda la información en su totalidad.
- Respaldo diferencial: Se realiza cada cierto tiempo y solo guarda la información nueva desde el último respaldo completo.
- Respaldo incremental: Similar al diferencial, pero se realiza con mayor frecuencia.

## Herramientas para respaldos:

- Bacula
- AWS RDS
- Amazon S3

---
# 15-Febrero-2024
---

# Protocolo LDAP/OpenLDAP:

- Permite montar varios servicios de la empresa con un árbol de dominio.
- Define usuarios de aplicación, no asociados a personas, sino a la interacción entre aplicaciones.

# Uso de Password Manager:

- Herramienta para gestionar contraseñas de forma segura.
- Se recomienda usar Entropía Keepass como herramienta específica.

# Medidas para proteger las contraseñas:

- Limitar el número de intentos de inicio de sesión (utilizar herramientas como fail2ban) .

# Tipos de pentesting:

- Internos: Se realizan desde dentro de la organización.
- Externos: Se realizan desde fuera de la organización.

# Según el conocimiento del sistema objetivo:

- Whitebox: El pentester tiene acceso completo al código fuente y la infraestructura.
- Blackbox: El pentester solo tiene acceso a la interfaz de usuario.
- Graybox: El pentester tiene acceso parcial al sistema.

## Fases del hacking (pentesting):

- Reconocimiento (Footprinting): Recopilación de información sobre el objetivo.
- Escaneo: Identificación de vulnerabilidades en el sistema.
- Ganar acceso: Explotación de las vulnerabilidades para obtener acceso al sistema.
- Mantener el acceso: Asegurar la persistencia en el sistema.
- Cubrir huellas: Eliminar rastros de la actividad del pentester.

---
# 20-Febrero-2024
---

# Modelo OSI:

Aplicación (@, URL, URI)
Transporte (PORTS) TCP Y UDP

# Puertos comunes:
80: HTTP
22: SSH
21: FTP
23: Telnet
25: SMTP
53: DNS
3306: MySQL
8080: Tomcat
Red (IP)
Enlace de datos (MAC)
Física (NIC)

# Puertos efímeros:
- Puertos temporales asignados por el sistema operativo.
- Se agotan cuando se alcanza el límite máximo.

# Herramientas para escaneo de puertos:
## netstat: 
Lista los puertos que escuchan en una máquina local.

## nmap:
nmap ip: Escaneo básico de una dirección IP.
nmap -pN ip: Escaneo sin ping (útil para hosts sigilosos).
nmap -p- ip: Escaneo de todos los puertos.
nmap -sV ip: Escaneo con detección de servicios.
nslookup url: Resolución de nombres de dominio a direcciones IP.
Triple handshake: Protocolo de establecimiento de conexión TCP.

# Pruebas prácticas:
Montar un Metasploitable2 en una máquina virtual para probar los comandos nmap.

# Recursos adicionales:
OWASP Top 10: https://owasp.org/www-project-top-ten/
NIST Cybersecurity Framework: https://www.nist.gov/cyberframework

# Temas adicionales:
Análisis de malware
Ingeniería social
Criptografía
Seguridad de la nube
Respuesta a incidentes

# Recomendaciones:
Mantenerse actualizado con las últimas amenazas y vulnerabilidades.
Participar en comunidades de seguridad informática.
Obtener certificaciones profesionales en el área de ciberseguridad.