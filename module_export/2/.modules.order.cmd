cmd_/home/pi/device-drivers/module_export/2/modules.order := {   echo /home/pi/device-drivers/module_export/2/my_add.ko;   echo /home/pi/device-drivers/module_export/2/average.ko; :; } | awk '!x[$$0]++' - > /home/pi/device-drivers/module_export/2/modules.order
