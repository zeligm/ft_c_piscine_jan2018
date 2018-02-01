ldapsearch -LLL -Q "(sn=bon*)" cn | grep "^cn: " | wc -l | cut -c8-
