ldapsearch -LLL -Q uid=z* cn | grep -i cn | cut -c5- | sort -rf
