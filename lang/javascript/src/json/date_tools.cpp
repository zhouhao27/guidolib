#include "date_tools.h"
#include "GUIDOEngine.h"
#include <sstream>
#include <cstdlib>

using namespace std;

void stringToDate(string raw, GuidoDate &date)
{
	// first, parse the fraction
	stringstream ss(raw);
    string item;
    vector<string> elems;
    while (getline(ss, item, '/')) {
        if (item != "") {
            elems.push_back(item);
        }
    }
    if (!(elems.size() == 2)) {
        date.num = 0;
        date.denom = 1;
    } else {
        date.num = atoi(elems[0].c_str());
        date.denom = atoi(elems[1].c_str());
        if (!date.denom)
            date.denom = 1;
    }
}
string dateToString(const GuidoDate &date)
{
    // first, parse the fraction
    stringstream ss;
	ss << date.num;
	ss << "/";
    ss << date.denom;
	return ss.str();
}

float dateToFloat(const GuidoDate &date) {
  if ((date.num == 0) && (date.denom == 0))
    return 0.f;
  if (date.denom == 0)
    return 1000000.f;
  return (date.num * 1.f) / (date.denom * 1.f);
}
