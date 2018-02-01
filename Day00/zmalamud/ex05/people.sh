ldapsearch -Q -LLL "(uid=z*)" cn | grep ^cn | cut -c5- | sort -r --ignore-case
