Quick todos:
Grant some more userpoints permissions like view all points.
Create a "moderator" role and grant them permissions on questions and points.
Create a help page about how PMB works.
Gallery of questions to vote on
Gallery of user avatars, with points/interests, sortable by points
Use the userpoints translation instead of $ in the messages on the node
Send e-mails to people when they win
Send periodic emails notifying people of new questions
Create a dashboard block with major stats like number of bets, number of questions, number of users, etc.

Contents
========
* About
* Installation
* Development status
* Roadmap
* Philosophical notes
* Random notes 


About
=====
This is a lot like DMB, but with more P and less D.

Meant to create a Pari-mutuel Betting system where people can place bets and odds are determined by the size of other bets. The winners split the total pot based on the size of their bets on the winning outcome.

Users create *questions* with specific possible *outcomes.* The outcomes should be mutually exclusive and cover the complete possible set of outcomes. Users can then place bets on those outcomes. As they bet the likelihood of different outcomes will become clear and may change over time. Once the event has happened and the question is answered, a moderator should *close* the question which will distribute the funds appropriately and prevent any new bets on the question. 

By default, comments are enabled on question nodes. Discussions on questions should be encouraged:
* Is this a well stated question?
* Has the question been decided meaning it needs to be closed?
* General banter on the topic could be insightful: "I bet this way because..." "Here is some research/evidence that could be useful."   

Pari-mutuel betting is great for simplicity and short-term bets. It's less great for bets with a long horizon because people have to keep their money in the position until the event happens in order to win. The drawbacks here are that people expect interest if their money is tied up AND that there's no ability to benefit from short-term movements in the odds.


Installation
============
Enable the pmb and pmb_question modules.
Grant the permissions to appropriate users.
Create some questions.
Get users to bet.

You may want to enable some "PMB" blocks like "user's bets".

Known bugs
==========
* The date field should default to "midnight tomorrow" but that's not working. 

Development status
==================
* Currently under active development.
* Collaboration of all sorts is very welcome, feature ideas, bug reports, patches, documentation, performance reviews, etc.
* All user facing text should be translatable.
* Nothing is sent through theme functions, patches to fix that are very welcome.


Roadmap
=======
The current module provides the basic working features of a Pari-mutuel betting system.

The most important enhancements *right now* are probably in the area of usability and graphing/reporting.

What should happen if a question closes on an outcome where nobody has bet?

## General features:
* let users remove some or all of their money from a position - could be done as a negative bet as long as the negative amount is smaller than their existing bet on that outcome
* better help text everywhere
* allow a user set their default bet size so the betting process is smoother
* take an optional percent of the pool to the house at closing (most exchanges make their profit this way).
* allow a user with some admin permission to bet on behalf of other users (is there actually a use case for this?).
* views-enable odds for a question
* views-enable the bets table
* Determine if distribution of points does tend to be long-running and, if so, move it to batch OR split it from closing and drush enable it so it can run OK (or both).

## listing features (views to build)
* create a list of all questions on the site with exposed search filters and sorts - give it a path nobody would actually want to force people to over-ride the view
* create a list of questions with recent bits
* create a block to show bets of all players (anonymously? with names?)
* create a block to show a random question with the odds for that question

## Reporting features
In general my hope is to use the Sampler API, Chart module and Views to create all graphs. This should allow the greatest re-use of the graphs of this site.
* show history of odds for a question
* show monetary supply of the site
* show number of users
* show number of bets per day
* show number of questions per day

## Enable automated betting
* Services enable API functions like pmb_bet_add and pmb_bet_close_bet
* Add more api functions as appropriate like getting a list of questions that includes a delta-keyed list of outcomes.
  
At some point in the future it will probably make more sense to transfer to a more traditional prediction market (e.g. stubhub) with an automated-market-maker.

Philosophical notes
===================
As you build/configure your site, consider what your purpose is.

The default purpose is to optimize for prediction value. This has influenced some specific features:
* On a question node, odds are shown and your own votes are shown, and maybe even some history of bets are shown, but not the names associated with other bets. Anonymity encourages taking unpopular (but accurate) bets.

Random notes
=============
* It's kind of weird if node is unpublished or otherwise made inaccessible to people after they have bet on it. This probably could be solved if there were a way to "reverse" all bets on a node.
* Should the site be taken offline during closing of questions? It's a lot of activity...
* Should closing a question be separated from distributing the funds for that question? 
* Should moderators close a question, comment about a proposed close, then actually close?
