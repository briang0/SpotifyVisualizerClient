#include <stdio.h>
#include <iostream>
#include <curl/curl.h>
#include <jsoncpp/json/json.h>
#include <string>

using namespace std;

//Section getSection(string songId) {
//	string uri = "http://localhost:8889/getSection?songid=";
//	const string url = uri.append(songId);
//	CURL* curl = curl_easy_init();
//	curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
//	curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
//
//}
