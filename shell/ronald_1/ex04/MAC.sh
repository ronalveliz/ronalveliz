ifconfig $interfaz | grep -i "ether" | awk '{print$2}'
