<?php
/**
 * @file
 * pmb_question.features.inc
 */

/**
 * Implements hook_node_info().
 */
function pmb_question_node_info() {
  $items = array(
    'question' => array(
      'name' => t('Question'),
      'base' => 'node_content',
      'description' => t('A question is an unknown situation you want to bet on.'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
  );
  return $items;
}
