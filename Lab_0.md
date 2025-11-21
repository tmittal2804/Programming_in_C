# **Lab 0: Setting Up the Environment for C Programming**

## **C Language**

C is a powerful and widely used programming language known for its efficiency and control over system resources. It is often used in system programming, operating systems, embedded systems, and performance‑critical applications.

**Key Features of C:**

-  Low‑level control: Provides direct access to memory.
-  Fast and efficient: Ideal for system-level programming.
-  Portable: Runs on many platforms with minimal modification.
-  Structured language: Encourages modular design using functions.
-  Foundation for other languages: Many modern languages are influenced by C.

## **Objective**

To set up a working environment for programming in C by installing Ubuntu on VirtualBox and configuring essential tools such as `gedit` (text editor) and `gcc` (compiler).

---
## **1. Installing Ubuntu on VirtualBox**

### **Steps:**

1. Download and install **VirtualBox** from the official website.
2. Download the **Ubuntu ISO** file (preferably LTS version).
3. Open VirtualBox and click **New** to create a new virtual machine.
4. Set the following:

   * **Name:** Ubuntu
   * **Type:** Linux
   * **Version:** Ubuntu (64-bit)
5. Allocate memory (recommended: **4 GB** or more).
6. Create a virtual hard disk (recommended: **20–30 GB**).
7. Go to **Settings > Storage**, select Empty disk icon, and attach the downloaded Ubuntu ISO.
8. Start the VM and follow the Ubuntu installation steps.

---
## **2. Updating Ubuntu**

Once Ubuntu is installed and running:

```bash
sudo apt update
sudo apt upgrade
```
This ensures all packages are up to date.

---

## **3. Installing gedit (Text Editor)**

`gedit` is a simple and user-friendly text editor for writing C programs.

### **Install using terminal:**

```bash
sudo apt install gedit
```

## **4. Installing GCC Compiler**

GCC (GNU Compiler Collection) is required to compile C programs.

### **Install gcc:**

```bash
sudo apt install gcc
```

### **Check installation:**

```bash
gcc --version
```
You should see the GCC version installed on your system.

---

**You are now ready to begin programming in C with a proper development environment!**
