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
            "time" : "2014-07-29T15:29:34.741618Z",
            "bid" : 1.25955,
            "ask" : 1.25964
        },
        {
            "instrument" : "USD_CAD",
            "time" : "2014-07-29T15:29:36.047687Z",
            "bid" : 1.0641,
            "ask" : 1.06454
        },
        {
            "instrument" : "USD_JPY",
            "time" : "2014-07-29T15:29:34.838243Z",
            "bid" : 90.111,
            "ask" : 90.122
        }
    ]
}
