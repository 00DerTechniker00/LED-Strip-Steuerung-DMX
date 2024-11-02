# LED-Strip-Steuerung-DMX
Einen LED Strip mit DMX Signal ansteuern

# Benötigte Hardware:
- ESP8266 bzw. ESP-WROMM-32
  - AliExpress: 3,15€ https://de.aliexpress.com/item/1005004476867346.html?spm=a2g0o.cart.0.0.194e4ae4uiHq5e&mp=1&gatewayAdapt=glo2deu (2. Option)
  - Amazon: 2 Stück für 12,99€ https://www.amazon.de/St%C3%BCcke-ESP32-Entwicklungsplatine-NodeMCU-Module/dp/B0C86C3JM5/ref=sr_1_5?crid=RITORT42MP17&dib=eyJ2IjoiMSJ9.xpo_6zNzThIP79lcVU9UGJZrSf17xJU466zh1_D26Mp2WF2ZtvlUI5Xuh0UD2YgHexp7r8dKmIS8SgE2ZEUePST-sfOm50drsO8RM6cXnrGzLnqWk4_kzpqYb6Yxm1H7ElzMj52BanF_xXqNdK9BrT6U7AkORpMfPmandxRUpaBHNZwEk4RiWYKd7x6OXam_MTHRc9nlbxh0xMUa4jCElXq_YMudiBjYsJoULkSLIe8.lSnKz9GqqBQaoc0aViiY9e83wWyd8dCVoHXcwz8ffXw&dib_tag=se&keywords=esp+32+wroom&qid=1730545680&sprefix=esp+32+%2Caps%2C102&sr=8-5
- Adressebale RGB LED Strip
  ![{607C9C8C-6F7A-41CD-A796-8E2614003D02}](https://github.com/user-attachments/assets/59b0692c-857f-4c49-afde-f85ea528fe26)
  - Entnommen aus: https://youtu.be/QnvircC22hU?si=SQL6aMKRhaSTdM1b (Watch the Video to Choose the best LED-Stripe option)
  - Da hier FastLed verwendet wird ist dies Empfehlenswehrt
  - AliExpress: https://de.aliexpress.com/item/2036819167.html?spm=a2g0o.cart.0.0.194e4ae4uiHq5e&mp=1&gatewayAdapt=glo2deu (Verschiedene Optionen)
    - bzw. https://btf-lighting.de.aliexpress.com/store/1051119?spm=a2g0o.store_pc_allItems_or_groupList.pcShopHead_6187360.0
  - Amazon: https://www.amazon.de/stores/page/9A31C854-77F0-4C4F-BA26-3DAD60C14BD3?ingress=2&visitId=906dce31-081b-48d1-a215-04afd111285c&ref_=ast_bln (Verschiedene Optionen)
    - bzw. https://www.amazon.de/stores/BTF-LIGHTING/page/B78560B3-3126-4436-A467-28002202E7F4?ref_=ast_bln
  - Wichtig darauf achten das der LED-Strip Adressiebar ist wie z.B. der WS2812B für mehr Informationen empfiehle ich das YouTube Video
- Netzteile
  - Bei einem 5V argb-Strip wird nur ein USB-C Kabel und ein USB-Netzeil benötigt. Das Netzteil sollte allerdings zwischen 5V und 12V ausgangsspannung unterstützen.
  - Bei Led-Stripes mit mehr Spannung wird ein extr Netzteil mit ausreichend Spannung benötigt. Züsätzlich wird ein DC Stecker Verbinder benötigt.
- MAX485
  - Wird benötigt um ein DMX-Signal in ein für den ESP lesbares Signal umzuwandeln
  - AliExpress: 0,99€ https://de.aliexpress.com/item/1005004867487459.html?spm=a2g0o.cart.0.0.194e4ae4uiHq5e&mp=1&gatewayAdapt=glo2deu
  - AliExpress: 5 Stück für 2,20€ https://de.aliexpress.com/item/1005003204223371.html?spm=a2g0o.cart.0.0.194e4ae4uiHq5e&mp=1&gatewayAdapt=glo2deu
  - Amazon: 5 Stück für 2,47€ https://www.amazon.de/Plouluyt-Stueck-RS485-Modul-485-Modul-Konverter-wie-Abbildung-gezeigt/dp/B0BQR7LP4P/ref=sr_1_16_sspa?__mk_de_DE=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=17KL3CICGV8Q5&dib=eyJ2IjoiMSJ9.IIwjd-nygYEqlnH5NYTeSXFamnmj8Q_WQmzdwDLGzEWB98ZnMDbyEp5Cxwtamd8Ndgl_qxZakDFbk8ESHSziVjibUzyyJec1RTDkarqvhfrQ0VVa4Vt6S8UGSqbB6osw-dopV7BOyrwFwjqquw3WDMrkgTPrIkrQ39bYT2a_59abOGmyUY_K-kIy9BenwDL5IJg5RR5WmtyoM4J--cbnnHSBYjzQnO26UjKcbMWM3-b1psOZY67zQjyUJXDMASXJ0kF_VbCGeb1G6HuL2sUbHBMjAGOgTlTAJXgRk_CWAKU.Q3krtWQk1YLsTP-DjBEBU0kwcRW3WxpsjOUdlRaLRTs&dib_tag=se&keywords=max+485&qid=1730549079&sprefix=max+48%2Caps%2C114&sr=8-16-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9tdGY&psc=1




![ESP32_RS485](https://github.com/user-attachments/assets/7e27935b-9396-4909-83fd-b499cc98d507)


https://envirementalb.com/arduino/ESP32-pinout-30pins.png
