### CAPISample

Sample C program using the curl library to fetch rate data for EUR/USD, USD/CAD, and USD/JPY.

### Compiling and Running

Compile the file through terminal using the GCC compiler. Make sure to link the curl library using the **-lcurl** flag.
> gcc APISample.c -lcurl -o rate_fetcher

Run the output file using the following command.
> ./rate_fetcher

Outputs to standard output.

    {"prices":[{"instrument":"EUR_USD","time":1354159723.558818,"bid":1.29521,"ask":1.29553},{"instrument":"USD_CAD","time":1354159054.813452,"bid":0.99198,"ask":0.99223},{"instrument":"USD_JPY","time":1354159744.355151,"bid":82.053,"ask":82.069}]}