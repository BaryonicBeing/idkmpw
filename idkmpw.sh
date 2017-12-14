#!/bin/bash

#Global variables
user=$(whoami)
domain="none"
length=32
label="none"

#Generate the password
generateSeahorseEntry() {
	password=$(./password_gen $length)
	echo $password 
}

#Evaluating the parameters
while getopts 't:l:u:d:' opt; do
	case $opt in
		t) label="${OPTARG}" ;;
		l) length="$OPTARG" ;;
		u) user="$OPTARG" ;;
		d) domain="${OPTARG}" ;;
		*) exit 1
	esac
done

if [ "$label" == "none" ];
then
	read -r -p "Please set a label:"
	label=$REPLY
	echo "Label has been set to $label"
fi

if [ "$domain" == "none" ];
then
	read -r -p "Please set a domain name:"
	domain=$REPLY
	echo "Domain name has been set to $domain"
fi

#Load password into tmp dfecause we need to use it twice
tmp=$(generateSeahorseEntry) 

#Once for adding it to the keyring
echo $tmp | secret-tool store --label="${label}" user $user domain "${domain}"

#And to copy the password to the clipboard
echo $tmp | xclip -selection c

#Erasing the tmp variable, because why not?
tmp=''

#Output for the user
echo -e "New entry for user '${user}' has been created.\nPassword has been copied to clipboard..."
