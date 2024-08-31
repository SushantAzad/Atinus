# ATINUS - Advanced Tool Integration for Unix Security Suite

## Overview

ATINUS is a C++ program designed for Unix-based systems to provide a user-friendly command-line interface (CLI) for integrating and managing a variety of security tools and services. The program offers features for automatic installation, running of security tools, and management of essential services, catering to various categories such as Information Gathering, Exploitation Tools, Sniffing and Spoofing, Web Application Analysis, and Anonymity.

## Features

- **Tool Detection and Installation**: Checks if required tools are installed and provides options for installation if not present.
- **Tool Execution**: Allows users to execute commands for a variety of tools based on the selected category.
- **Service Management**: Offers functionality to manage services (start, stop, and check status).
- **Categorized Tools and Services**: Organizes tools and services into categories for easier access and usability.
- **User-Friendly Interface**: Command-line menu-driven interface for easy navigation and selection.

## Supported Categories and Tools

### 1. Information Gathering

- **Nmap**: Network exploration and security auditing tool.
- **Subfinder**: Subdomain discovery tool.
- **theHarvester**: E-mail, subdomain, and IP information gathering tool.
- **Amass**: In-depth DNS enumeration tool.
- **Sublist3r**: Subdomain enumeration tool.

### 2. Exploitation Tools

- **Metasploit**: Penetration testing framework.
- **Maltego**: Open-source intelligence and forensics application.
- **Recon-Ng**: Web reconnaissance framework.

### 3. Sniffing and Spoofing

- **Hping3**: TCP/IP packet assembler and analyzer.
- **Arping**: Sends ARP requests to hosts.
- **Netdiscover**: Passive ARP reconnaissance tool.

### 4. Web Application Analysis

- **Spiderfoot**: OSINT automation tool.
- **Burp Suite**: Web vulnerability scanner (placeholder).

### 5. Anonymity

- **Tor**: Anonymity network.
- **Proxychains**: Redirects network connections through multiple proxies.

### 6. Services

- **NetworkManager**: Network management daemon.
- **PostgreSQL**: Open-source relational database.
- **Metasploit**: Penetration testing software.
- **Apache2**: Web server software.
- **MySQL/MariaDB**: Open-source relational database.
- **Docker**: Containerization platform.

## Prerequisites

- **Operating System**: Unix-based systems (Linux, macOS, etc.).
- **C++ Compiler**: Supports C++11 or higher.

## How to Use

1. **Compile the Program**:  
   Use a C++ compiler like `g++` to compile the program.
   ```bash
   g++ -o atinus atinus.cpp
   ```

Run the Program:
Execute the compiled binary.

bash
Copy code
./atinus
Follow the Menu Options:

Choose a category from the main menu.
Select a tool to run or manage services as per your requirement.
Install Tools:
If a tool is not installed, the program will prompt for installation.

Example Usage
To perform Information Gathering using Nmap:

Select "Information Gathering" from the main menu.
Choose "Nmap".
Enter the target IP or domain when prompted.

To manage a service like Apache2:
Select "Services" from the main menu.
Choose "Apache2".
Choose an option to see status, start, or stop the service.

Limitations
This program is designed to run on Unix-based systems only and will not function on Windows.
Some tools may require additional configuration or dependencies not handled by this program.
Future Enhancements
Adding more tools and categories.
Improving error handling and user feedback.
Enhancing compatibility with other Unix-based systems.

Contribution
Feel free to contribute by submitting issues or pull requests to the repository.

Contact
For more information or queries, contact the developer at [sushantazad007@gmail.com].
