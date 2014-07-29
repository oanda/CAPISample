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
                         "http://api-sandbox.oanda.com/v1/prices?instruments=EUR_USD%2CUSD_CAD%2CUSD_JPY");

        struct curl_slist *chunk = NULL;

        // uncomment to add authorization header: not required for sandbox
        // chunk = curl_slist_append(chunk, "Authorization: Bearer <your access token>");
        
        /* use custom headers */
        res = curl_easy_setopt(curl, CURLOPT_HTTPHEADER, chunk);
        
        /* Perform the request, res will get the return code */
        res = curl_easy_perform(curl);
        
        /* Check for errors */
        if(res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                    curl_easy_strerror(res));
        }
        
        /* always cleanup */
        curl_easy_cleanup(curl);

        /* free the custom headers */ 
        curl_slist_free_all(chunk);
    }
    return 0;
}
