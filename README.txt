

About
=====
This is a lot like DMB, but with more P.

Meant to create a Pari-mutuel Betting system where people can place bets and odds are determined by the size of other bets. The winners split the total pot based on the size of their bets on the winning outcome.

Users create *questions* with specific possible *outcomes.* The outcomes should be mutually exclusive and cover the complete possible set of outcomes. Users can then place bets on those outcomes. As they bet the likelihood of different outcomes will become clear and may change over time. Once the event has happened and the question is answered, a moderator should *close* the question which will distribute the funds appropriately and prevent any new bets on the question. 

By default, comments are enabled on question nodes. Discussions on questions should be encouraged:
* Is this a well stated question?
* Has the question been decided meaning it needs to be closed?
* General banter on the topic could be insightful: "I bet this way because..." "Here is some research/evidence that could be useful."   


Installation
============
Enable the pmb and pmb_question modules.
Grant the permissions to appropriate users.
Create some questions.
Get users to bet.

You may want to enable some "PMB" blocks like user's bets.


Development status
==================
Currently under active development.

All user facing text should be translatable.

Nothing is sent through theme functions, patches to fix that are very welcome.


Philosophical notes
===================
As you build/configure your site, consider what your purpose is.

The default purpose is to optimize for prediction value. This has influenced some specific features:
* On a question node, odds are shown and your own votes are shown, and maybe even some history of bets are shown, but not the names associated with other bets. Anonymity encourages taking unpopular (but accurate) bets.

