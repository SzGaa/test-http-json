#include <cpr/cpr.h>
#include <json/json.h>
#include <map>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
		// read & parse
	Json::Value root;
	istringstream{ Get( cpr::Url{"https://dummyjson.com/products"}).text}>>root;

		//  populate map
	map<string, vector<Json::Value>> prd_by_cat;
	for (auto&& prd : root["products"] )
	{
		prd_by_cat[ prd["category"].asString()].emplace_back( prd);
	}

		//  print grouped
	for ( const auto&[ cat, prds ] : prd_by_cat)
	{
		cout<<"Category: "<<cat<<"\n";
		for (const auto& prd : prds )
		{
			cout<<"\t"<<prd["id"]<<" - "<<prd["title"]<<"\n";
		}
	}
}
