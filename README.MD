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

Follow these steps to get started with ATINUS:

1. **Clone the Repository**:  
   Begin by cloning the ATINUS repository from GitHub to your local machine. Open your terminal and run:

   ```bash
   git clone https://github.com/SushantAzad/atinus.git
   ```

2. **Navigate to the Project Directory**:
   Change into the directory where the repository was cloned:

```bash
cd atinus
```

3. **Compile the Program**:

Use a C++ compiler like g++ to compile the program. Run the following command in your terminal:

```bash
g++ -o atinus atinus.cpp
```

This will compile the atinus.cpp file and generate an executable named atinus

4. **Run the Program**:
   Execute the compiled binary to start the ATINUS program:

```bash
./atinus
```

5. **Follow the Menu Options**:

Once the program is running, follow the on-screen menu options:

1.  Choose a category from the main menu (e.g., Information Gathering, Exploitation Tools, etc.).

2.  Select a tool to run or a service to manage based on your needs.

6)  **Install Tools (if necessary)**:
    If a required tool is not installed on your system, the program will prompt you to install it. Follow the prompts to install the necessary tools automatically.

## Example Usage

- **To perform Information Gathering using Nmap**:

  - Select "Information Gathering" from the main menu.
  - Choose "Nmap".
  - Enter the target IP or domain when prompted.

- **To manage a service like Apache2**:
  - Select "Services" from the main menu.
  - Choose "Apache2".
  - Choose an option to see status, start, or stop the service.

## Limitations

- This program is designed to run on Unix-based systems only and will not function on Windows.
- Some tools may require additional configuration or dependencies not handled by this program.

## Future Enhancements

- Adding more tools and categories.
- Improving error handling and user feedback.
- Enhancing compatibility with other Unix-based systems.

## Contribution

Feel free to contribute by submitting issues or pull requests to the repository.

## Contact

For more information or queries, contact the developer at [sushantazad007@gmail.com](mailto:sushantazad007@gmail.com)
ls
