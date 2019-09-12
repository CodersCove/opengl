var Page  = require('../BASE/Page.js').Page;
var RiotAPI  = require('./../RiotAPI.js').RiotAPI;

class Brackets extends Page
{
  source = "Brackets.html"
  constructor()
  {
    super();
    console.log(window.URLSearchParams);
  }

  BT_Verify_Click(Sender, Event)
  {

  }
}

exports.Brackets = Brackets;
