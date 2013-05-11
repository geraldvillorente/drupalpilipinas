#!/bin/sh

# Deployment script of Drupal Pilipinas

usage() {
  echo "Usage : "
  echo " ./deployment.sh"
  exit 1
}

echo -n "Are you sure you want to deploy?[Y/N] "
# Read the user input
read ANSWER

# Check if you specify the files source 
if [ -z "$ANSWER" ]; then
  echo "Oh crap! You have to agree matey."
  exit
else
  # Check if the source path is valid
  if [ -n "$ANSWER" ] && [ $ANSWER = 'Y']; then
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
  else
	echo "Looooseerrrr!"
	exit
  fi
fi
