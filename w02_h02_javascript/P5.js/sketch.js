var yWave = 0.0;   
var song, amplitude,bg;

function perload(){
  song = loadSound('assets/distant.mp3');
}

function setup() {
  bg = createCanvas(600, 400);
  amplitude = new p5.Amplitude();
  
  bg.mouseClicked(function(){
    if(song.isPlaying()){
      song.stop();
    }else{
      song.play();
    }
    
  });

}

function draw() {
  background(	23, 83, 202);
  noStroke();
  fill(68, 137, 234);
  beginShape(); 
  
  
  var xWave = 0;       
 
  for (var x = 0; x <= width; x += 8) {
    var y = map(noise(xWave, yWave), 0, 1, 300,100);
    vertex(x, y); 
    xWave += 0.06;
  }

  yWave += 0.03;
    vertex(width, height);
    vertex(0, height);
    endShape(CLOSE);
}
