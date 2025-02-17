<h1 style="text-align:center;"> Grafana</p>

## Basic commands

1. Check data sources
   ```
   curl 'http://admin:admin@localhost:3000/api/datasources'
   ```
2.  Push data source
    ```
    curl 'http://admin:admin@localhost:3000/api/datasources' -X POST -H 'Content-Type: application/json;charset=UTF-8' --data-binary '{"name":"loki","type":"loki","url":"http://localhost:3100","access":"proxy","isDefault":true,"database":"tsdb"}'
    ```

3. Query based on job
   ```
   logcli query '{job="varlogs"}'

   logcli query '{job="systemd-journal"}'
   ```

4. Query based on hostname
   ```
   logcli query '{hostname="ghaf-host"}'
   
   logcli query '{hostname="loki-01.prometheus.local"}'
   ```