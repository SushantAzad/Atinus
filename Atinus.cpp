#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

#if defined(_WIN32) || defined(_WIN64)
#define IS_WINDOWS true
#else
#define IS_WINDOWS false
#endif

#if !IS_WINDOWS

bool isToolInstalled(const string &tool)
{
    string command = "command -v " + tool + " >/dev/null 2>&1";
    return system(command.c_str()) == 0;
}

void installTool(const string &tool, const string &installCommand)
{
    if (!isToolInstalled(tool))
    {
        cout << "Installing " << tool << "..." << endl;
        system(installCommand.c_str());
    }
    else
    {
        cout << tool << " is already installed." << endl;
    }
}

void runTool(const string &tool, const string &command, const string &inputPrompt = "")
{
    if (!isToolInstalled(tool))
    {
        char installChoice;
        cout << tool << " is not installed. Would you like to install it? (y/n): ";
        cin >> installChoice;
        if (installChoice == 'y' || installChoice == 'Y')
        {
            if (tool == "subfinder")
                installTool(tool, "GO111MODULE=on go install -v github.com/projectdiscovery/subfinder/v2/cmd/subfinder@latest");
            else if (tool == "theHarvester" || tool == "sublist3r")
                installTool(tool, "pip install " + tool);
            else
                installTool(tool, "sudo apt-get install -y " + tool);
        }
        else
        {
            cout << "Skipping installation of " << tool << "." << endl;
            return;
        }
    }

    if (!inputPrompt.empty())
    {
        string input;
        cout << inputPrompt;
        cin >> input;
        system((command + " " + input).c_str());
    }
    else
    {
        system(command.c_str());
    }
}

void displayHeader()
{
    cout << "======================================" << endl;
    cout << "          WELCOME TO ATINUS           " << endl;
    cout << "  Advanced Tool Integration for Unix  " << endl;
    cout << "           Security Suite             " << endl;
    cout << "======================================" << endl;
}

void displayToolMenu(const string &category)
{
    int choice;

    cout << "Select a tool to run from " << category << ":" << endl;

    if (category == "Information Gathering")
    {
        cout << "1. Nmap" << endl;
        cout << "2. Subfinder" << endl;
        cout << "3. theHarvester" << endl;
        cout << "4. Amass" << endl;
        cout << "5. Sublist3r" << endl;
        cout << "6. Exit to main menu" << endl;
    }
    else if (category == "Exploitation Tools")
    {
        cout << "1. Metasploit" << endl;
        cout << "2. Maltego" << endl;
        cout << "3. Recon-Ng" << endl;
        cout << "4. Exit to main menu" << endl;
    }
    else if (category == "Sniffing and Spoofing")
    {
        cout << "1. Hping3" << endl;
        cout << "2. Arping" << endl;
        cout << "3. Netdiscover" << endl;
        cout << "4. Exit to main menu" << endl;
    }
    else if (category == "Web Application Analysis")
    {
        cout << "1. Spiderfoot" << endl;
        cout << "2. Burp Suite" << endl; // Example placeholder for additional tools
        cout << "3. Exit to main menu" << endl;
    }
    else if (category == "Anonymity")
    {
        cout << "1. Tor" << endl;         // Example placeholder for additional tools
        cout << "2. Proxychains" << endl; // Example placeholder for additional tools
        cout << "3. Exit to main menu" << endl;
    }

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        if (category == "Information Gathering")
            runTool("nmap", "nmap -v -A -T4", "Enter target IP or domain: ");
        else if (category == "Exploitation Tools")
            runTool("metasploit", "msfconsole");
        else if (category == "Sniffing and Spoofing")
            runTool("hping3", "hping3", "Enter target IP: ");
        else if (category == "Web Application Analysis")
            runTool("spiderfoot", "spiderfoot");
        else if (category == "Anonymity")
            runTool("tor", "tor");
        break;
    case 2:
        if (category == "Information Gathering")
            runTool("subfinder", "subfinder -d", "Enter target domain: ");
        else if (category == "Exploitation Tools")
            runTool("maltego", "maltego");
        else if (category == "Sniffing and Spoofing")
            runTool("arping", "arping", "Enter target IP: ");
        else if (category == "Web Application Analysis")
            runTool("burpsuite", "burpsuite");
        else if (category == "Anonymity")
            runTool("proxychains", "proxychains");
        break;
    case 3:
        if (category == "Information Gathering")
            runTool("theHarvester", "theHarvester -d", "Enter target domain: ");
        else if (category == "Exploitation Tools")
            runTool("recon-ng", "recon-ng");
        else if (category == "Sniffing and Spoofing")
            runTool("netdiscover", "netdiscover");
        break;
    case 4:
        if (category == "Information Gathering")
            runTool("amass", "amass enum -d", "Enter target domain: ");
        break;
    case 5:
        if (category == "Information Gathering")
            runTool("sublist3r", "sublist3r -d", "Enter target domain: ");
        break;
    case 6:
        return;
    default:
        cout << "Invalid choice. Returning to the main menu." << endl;
    }
}

void manageService(const string &service)
{
    int choice;
    cout << "Managing Service: " << service << endl;
    cout << "1. See status" << endl;
    cout << "2. Start service" << endl;
    cout << "3. Stop service" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        system(("systemctl status " + service).c_str());
        break;
    case 2:
        system(("sudo systemctl start " + service).c_str());
        cout << service << " started." << endl;
        break;
    case 3:
        system(("sudo systemctl stop " + service).c_str());
        cout << service << " stopped." << endl;
        break;
    default:
        cout << "Invalid choice." << endl;
    }
}

int main()
{
    displayHeader(); // Show header on startup

    int choice;

    while (true)
    {
        cout << "Select a category:" << endl;
        cout << "1. Information Gathering" << endl;
        cout << "2. Exploitation Tools" << endl;
        cout << "3. Sniffing and Spoofing" << endl;
        cout << "4. Web Application Analysis" << endl;
        cout << "5. Anonymity" << endl;
        cout << "6. Services" << endl; // New Services Menu Option
        cout << "7. Exit" << endl;     // Update the exit option to 7
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            displayToolMenu("Information Gathering");
            break;
        case 2:
            displayToolMenu("Exploitation Tools");
            break;
        case 3:
            displayToolMenu("Sniffing and Spoofing");
            break;
        case 4:
            displayToolMenu("Web Application Analysis");
            break;
        case 5:
            displayToolMenu("Anonymity");
            break;
        case 6:
            cout << "Select a service to manage:" << endl;
            cout << "1. NetworkManager" << endl;
            cout << "2. PostgreSQL" << endl;
            cout << "3. Metasploit" << endl;
            cout << "4. Apache2" << endl;
            cout << "5. MySQL/MariaDB" << endl;
            cout << "6. Docker" << endl;
            cout << "7. Exit to main menu" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                manageService("NetworkManager");
                break;
            case 2:
                manageService("postgresql");
                break;
            case 3:
                manageService("metasploit");
                break;
            case 4:
                manageService("apache2");
                break;
            case 5:
                manageService("mysql");
                break;
            case 6:
                manageService("docker");
                break;
            case 7:
                break;
            default:
                cout << "Invalid choice. Returning to the main menu." << endl;
            }
            break;
        case 7: // Update to 7 for exit
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    }

    return 0;
}

#else

int main()
{
    cout << "This program is designed to run on Unix-based systems only." << endl;
    return 0;
}

#endif
