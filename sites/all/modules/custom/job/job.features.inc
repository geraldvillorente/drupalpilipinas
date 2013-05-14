<?php
/**
 * @file
 * job.features.inc
 */

/**
 * Implements hook_node_info().
 */
function job_node_info() {
  $items = array(
    'job' => array(
      'name' => t('Job'),
      'base' => 'node_content',
      'description' => t('Use <em>jobs</em> for posting job vacancies or freelance work.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Please be specific on the Job Title (e.g. Senior Drupal - LAMP - PHP Developer )<br>

In the Body, please include a brief description of the employer, the job description and requirements, and any other information.<br>
Remember: <strong>Be specific</strong><br><br>

<strong>Good Example:</strong><br>
ABC Company is a Drupal shop based in the Philippines specializing in small corporate websites for 5 years.<br>
We are accepting resumes from experienced developers willing to work in the Makati area.<br>
The primary responsibility of the Senior Drupal / LAMP / PHP Developer is to design, code, test, implement, and maintain high-volume applications that are critical to meeting the strategies and objectives of the business.<br>
The business hours are 8:30am to 5:00pm, although there will be periodic after-hours and weekend support needs.<br><br>

Requirements:<br>
<ul>
<li>Preferable a minimum of 3+ years of development experience with the stated skill sets</li>
<li>Four year college degree in Information Technology or related major</li>
<li>Excellent written and verbal communication skills are a must</li>
<li>Handle multiple projects and tasks concurrently</li>
</ul><br>

<strong>Bad:</strong><br>
Our company is needing a Programmer who knows drupal.<br>
Willing to work long hours<br>
Look for Boyet'),
    ),
  );
  return $items;
}
