# idkmpw
I don't know my password (idkmpw) is a bash program to automatically create a password for a certain domain.
The password is being copied to the clipboard right after the program finishes so you can just paste it into
whatever input field it belongs. Meanwhile, idkmpw is making an entry for you into the seahorse keyring using
secret-tool

## How to use idkmpw

You need to simply call the program in your terminal and give it the essentials via parameters like this

**./idkmpw.sh -l 64 -u username -d domainname -t tag**

## Parameter

**l**: Telling idkmpw how long the password should be. Default is 32.

**u**: Username, default is result of 'whoami'.

**d**: Domain name, e.g. https://www.stackoverflow.com. If this parameter is not used a prompt will
gently remind you to do so.

**t**: Tag for seahorse entry. Is required like 'd' so you get a prompt if you don't set it.

## Why didn't you just write everything in bash?
Long story short, first there was the C code, which was nice and all but felt incomplete.
So i decided to wrap it up with some bash to make it's use more convinient.

Maybe, i'll make this thing pure bash in the future.

But in the meanwhile: It's working :3
