# idkmpw
I don't know my password (idkmpw) is a bash program to automatically create a password for a certain domain.
The password is being copied to the clipboard right after the program finishes so you can just paste it into
whatever input field it belongs. Meanwhile, idkmpw is making an entry for you into the seahorse keyring using
secret-tool

## How to use idkmpw

You need to simply call the program in your terminal and give it the essentials via parameters like this

'./idkmpw.sh -l 64 -u username -d domain.name -t tag'

## Parameter

**l**: Telling idkmpw how long the password should be. Default is 32.
**u**: Username, default is result of 'whoami'
**d**: Domain name, e.g. https://www.stackoverflow.com. If this parameter is not used a prompt will
gently remind you to do so.
**t**: Tag for seahorse entry. Is required like 'd' so you get a prompt if you dont set it.
