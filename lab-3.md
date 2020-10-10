# LAB 3

## RPI

* RPi 3 vs Rpi4

### Boot drive for RPi

* Download ZIP-file ```Raspberry Pi OS (32-bit) with desktop``` from ```https://www.raspberrypi.org/downloads/```
* Download and install ```Balena Etcher``` from ```https://www.balena.io/etcher/```
* Put in SD-card in computer
* Start Balena Etcher
* Choose Flash from file ande select ```2020-08-20-raspios-buster-armhf.zip``` or similar name
* Select target and choose drive ```SD-card```
* WARNING! Be careful not to flash wrong drive!
* Click ```Flash```
* Remove SD-card and put it into RPi
* Start

### Update system

* Establish Internet connection
* Open terminal
* Send ```sudo apt-get update``` to refresh list of new updates
* Send ```sudo apt-get upgrade```to download new updates
* Send ```sudo reboot```

### Install keyboard on screen

* Send ```sudo apt-get install matchbox-keyboard```

### Rotate screen

* In terminal send ```sudo nano /boot/config.txt```
* Add line ```lcd_rotate=2```
* Save and exit

### Install Utilities (https://tech.scargill.net/the-script/)

* In terminal send ```wget https://bitbucket.org/api/2.0/snippets/scargill/kAR5qG/master/files/script.sh```
* Send ```bash script.sh```
* Choose Utility to install
* Send ```sudo reboot```

### Start Chromium in kiosk mode

* In terminal send ```chromium-browser --kiosk http://www.anyurl.com```

### Autostart in kiosk mode

* ```https://wolfgang-ziegler.com/blog/setting-up-a-raspberrypi-in-kiosk-mode-2020```

## Setup MQTT

### Create username and pw to MQTT

* Open terminal and connect to RPi
* Enter ```sudo mosquitto_passwd -c /etc/mosquitto/mypasswords [new-username]``` (-c is create)
* Enter password and reenter

### Use the new file mypasswords

* Edit configuration ```sudo nano /etc/mosquitto/mosquitto.conf```
* Add the following at the end...
```bash
allow_anonymous false
password_file /etc/mosquitto/mypasswords
```
* Enter ```sudo reboot```

### Test Broker
