//
//  main.c
//  testhelloc
//
//  Created by Jimmy Sun on 2012-11-28.
//  Copyright (c) 2012 OANDA. All rights reserved.
//

/** Description
 *  Sample project in C using libcurl.
 *  Requests the rate data for EUR/USD, USD/CAD, AND USD/JPY and outputs them to standard output.
 */

#include <stdio.h>
#include <curl/curl.h>

int main() {
    CURL *curl;
    CURLcode res;
    
    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL,
                         "http://api-sandbox.oanda.com/v1/quote?instruments=EUR_USD,USD_CAD,USD_JPY");
        
        /* Perform the request, res will get the return code */
        res = curl_easy_perform(curl);
        
        /* Check for errors */
        if(res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                    curl_easy_strerror(res));
        }
        
        /* always cleanup */
        curl_easy_cleanup(curl);
    }
    return 0;
}
