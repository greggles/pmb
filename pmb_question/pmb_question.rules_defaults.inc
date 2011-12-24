<?php
/**
 * @file
 * pmb_question.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function pmb_question_default_rules_configuration() {
  $items = array();
  $items['rules_user_created_give_points'] = entity_import('rules_config', '{ "rules_user_created_give_points" : {
      "LABEL" : "User created give points",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "pmb", "userpoints" ],
      "REQUIRES" : [ "userpoints_rules", "rules" ],
      "ON" : [ "user_insert" ],
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "account" ],
            "points" : "250",
            "tid" : "0",
            "entity" : [ "" ],
            "description" : "Thanks for registering - you get points just for registering!",
            "operation" : "Register",
            "display" : 1,
            "moderate" : "approved"
          }
        }
      ]
    }
  }');
  return $items;
}
