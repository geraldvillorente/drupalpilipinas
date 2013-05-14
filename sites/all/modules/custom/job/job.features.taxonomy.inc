<?php
/**
 * @file
 * job.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function job_taxonomy_default_vocabularies() {
  return array(
    'job_skills' => array(
      'name' => 'Job Skills',
      'machine_name' => 'job_skills',
      'description' => 'A list of skills for job postings.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
