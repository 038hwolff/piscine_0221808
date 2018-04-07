ldapsearch -xLLL sn="*bon*" | grep sn: | wc -l | cut -d ' ' -f7
