ldapsearch -xLLL "uid=z*" cn | grep cn | sort -rf | sed -n 's/cn: //p' 
