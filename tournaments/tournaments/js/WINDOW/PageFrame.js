class PageFrame
{
  UICLASS = "";
  navelement;
  window;
  id;


  constructor(id)
  {
    console.log(document.innerHTML);
    this.navelement = document.getElementById(id);



  }



  navigate(myclass)
  {
    //this.navelement.src = path;
  //  var script = document.createElement("script");
    //script.innerText = "UICLASS = " + myclass;
    //this.navelement.appendChild(script);
    //this.navelement.contentWindow.lol = "hi";
    fs.readFile(__dirname + "..\\..\\..\\html\\" + myclass.source, "utf8", (err, data) => {
      if (err) throw err;
      this.navelement.innerHTML = data;
      this.navelement.UICLASS = myclass;
      this.navelement.UICLASS.onLoaded();
    });
  }
}

exports.PageFrame = PageFrame;
