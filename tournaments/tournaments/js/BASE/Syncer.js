class Syncer
{
  done = function(data) {};
  func = function() {};

  constructor()
  {

  }

  onDone(done)
  {
    this.done = done;
    this.func();
  }
}



exports.Syncer = Syncer;
