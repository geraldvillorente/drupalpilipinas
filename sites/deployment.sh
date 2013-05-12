#!/bin/bash

# Deployment script of Drupal Pilipinas

usage() {
  echo "Ex: ./deployment.sh local"
  exit 1
}

if [ -z "$1" ]; then
  echo "You have to specify the environment."
  echo "";
  usage
  exit 1
fi

read -p "What is the name of the folder where your settings.php currently resides in? " SETTINGS_DIR
cd $SETTINGS_DIR

# Read the user input
read -p "Are you sure you want to deploy (Y/N)? " ANSWER

# Check if the user cofirmed. 
if [ -z "$ANSWER" ]; then
  echo "Oh crap! You have to agree matey."
  exit 1
else
  # Check for the supplied input.
  if [ "$ANSWER" == "Y" ]; then
	drush en ctools -y
	drush en context -y
	drush en delta -y
	drush en delta_ui -y
	drush en drupinas_core -y
	drush en context_ui -y
	drush en delta_context_omega -y
	drush en features -y
	drush en browscap -y
	drush en token -y
	drush en pathauto -y
	drush en metatag -y
	drush en views -y
	drush en views_ui -y
	
	echo "All deployed. Thank you!"
	
	exit 1
  elif [ "$ANSWER" == "N" ]; then
    echo "Don't be afraid, everythings gonna be alright. Lagot ka!"
    exit 1
  elif [ "$ANSWER" != "Y" ] || [ "$ANSWER" -ne "N" ]; then
	echo "I only accept Y or N! Cmmon!"
	exit 1
  else 
    echo "Looseerr!"
    exit 1
  fi
fi
