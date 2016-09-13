
 // console.log("sleep");
$(document).ready(function(){
 
  var Blossomflower=400;
  var $Blossomflower=$(".Blossomflower");

  // radius of this circle
  var r=600;
  for(var i=0;i<Blossomflower;i++){
    var $Blossomflower1 =$("<div/>").addClass("Blossomflower1");
    $Blossomflower.append($Blossomflower1);
  }
  $(".Blossomflower1").each(function(){
    var move=$(this);
    var s=0.2+(Math.random()*1);
    var move1=r+(Math.random()*300);

    move.css({ 
      transformOrigin:"0 0 "+move1+"px",
      transform:" translate3d(0,0,-"+move1+"px) rotateY("+(Math.random()*360)+"deg) rotateX("+(Math.random()*-50)+"deg) scale("+s+")"
       
    })
  })
})


//inspired by http://pupunzi.github.io/jquery.mb.CSSAnimate/demo.html
//inspired by http://codepen.io/lbebber/pen/xbZKvQ
