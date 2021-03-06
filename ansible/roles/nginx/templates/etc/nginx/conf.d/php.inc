{% if nginx_enable_php != 0 %}
### START ###
index index.html index.htm index.php;
location ~ [^/]\.php(/|$) {
    fastcgi_split_path_info ^(.+\.php)(/.+)$;
    if (!-f $document_root$fastcgi_script_name) {
        return 404;
    }
    fastcgi_pass php-fpm;
    fastcgi_index index.php;
    include fastcgi_params;
    fastcgi_param SCRIPT_FILENAME $document_root$fastcgi_script_name;
    fastcgi_param PATH_INFO $fastcgi_path_info;
    fastcgi_param PATH_TRANSLATED $document_root$fastcgi_path_info;
}
### END ###
{% endif %}
