### CAPISample

Sample C program using the curl library to fetch rate data for EUR/USD, USD/CAD, and USD/JPY.

### Compiling and Running

Make sure you have the correct dev package for the curl library.
> apt-get install libcurl4-gnutls-dev

Compile the file through terminal using the GCC compiler. Link the curl library using the **-lcurl** flag.
> gcc APISample.c -lcurl -o rate_fetcher

Run the output file using the following command.
> ./rate_fetcher

Outputs to standard output.

    {
        "prices" : [
            {
                "instrument" : "EUR_USD",
                "time" : "2014-07-29T15:18:37.659150Z",
                "bid" : 1.25636,
                "ask" : 1.25645
            }
        ]
    }
