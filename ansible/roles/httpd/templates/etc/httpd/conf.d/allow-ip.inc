{% if httpd_enable_ip_limit != 0 %}
### START ###
Require local
Require ip 10.0.0.0/8
Require ip 172.16.0.0/12
Require ip 192.168.0.0/16
Require ip fc00::/7
# *** Tips: Please add here
### END ###
{% endif %}
