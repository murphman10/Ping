/* Cloudflare Internship Application - Systems
 * Applicant: Asa Murphy
 * Date: 04/17/2020
 *
 * README:
 * To compile: g++ filename.cpp -o executable
 * To run: ./executable
 * Thank you for consifering me for this opportunity.
 */

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

static string hostName,
              re_ping;
void ping();

int main()
{
  cout << "Welcome to the Ping application.";
  cout << "\n";
  ping();
  return 0;
}

void ping()
{
  cout << "Enter a host name:";
  cin >> hostName;
  system(("ping " + hostName).c_str());
  cout << "\n";
}
