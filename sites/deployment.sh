#!/bin/bash

# Deployment script of Drupal Pilipinas

usage() {
  echo "Ex: ./deployment.sh local|staging"
  exit 1
}

if [ -z "$1" ]; then
  echo "You have to specify the environment."
  echo "";
  usage
  exit 1
fi

read -p "What is the name of the folder where your settings.php currently resides in? " SETTINGS_DIR

if [ ! -d "$SETTINGS_DIR" ]; then
  echo "The folder you specified doesn't exist. Get a coffee and run again."
  exit 1
fi
# Navigate to files/settings directory.
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
    drush en features -y
    drush en browscap -y
    drush en token -y
    drush en pathauto -y
    drush en metatag -y
    drush en views -y
    drush en views_ui -y
    drush en ckeditor -y
    drush en serial -y
    drush en media -y
    drush en media_internet -y
    drush en file_entity -y
    drush en emfield -y
    drush en media_vimeo -y
    drush en media_youtube -y
    drush en drupalpilipinas -y
    drush vset theme_default drupalpilipinas 1
    
    drush updb -y
    drush fra -y
    drush cc all
    echo "All deployed. Thank you!"
    
    exit 1
  elif [ "$ANSWER" == "N" ]; then
    echo "Don't be afraid, everythings gonna be alright. Lagot ka!"
    exit 1
  elif [ "$ANSWER" != "Y" ] || [ "$ANSWER" -ne "N" ]; then
    echo "I only accept Y or N! Cmmon! Looseerr!"
    exit 1
  fi 
fi
