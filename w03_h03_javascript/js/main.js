var APIKey= 'dc6zaTOxFJmzC';

function clickAction(){
 textField = document.getElementById("search");
 appendImage(textField.value);
}

function appendImage(tag) {
       
  //This code runs git gif and get back an image URL from Giphy
        queryUrl = getSearchUrl(tag); // build URL to search Giphy API
        response = httpGet(queryUrl); // http request to the API Giphy
        imageUrl = response.data.fixed_height_small_url; // get the URL for the small image
  
 
        var marq = document.createElement("MARQUEE");
        
        var img = document.createElement("IMG");
        img.src = imageUrl;
        marq.appendChild(img)
        document.body.appendChild(marq)
    }

    function getSearchUrl(tag) {
      
        var encodedTag = "&tag=" + encodeURIComponent(tag)
        //API endpoint for getting a random image from giphy
       
        var baseUrl = "http://api.giphy.com/v1/gifs/random?api_key=dc6zaTOxFJmzC"
        var url = baseUrl + encodedTag
        return url;
    }

    function httpGet(theUrl)  
    {  

        var xmlHttp = new XMLHttpRequest();  
        xmlHttp.open( "GET", theUrl, false ); 
        xmlHttp.send( null );  
        return JSON.parse(xmlHttp.responseText);  
    }  
    
function clickReset() {
var elems = document.getElementsByTagName("marquee");
  var list = []
  for (element in elems) {
    list.push(elems[element]);
  }
  
  for (item in list) {
    document.body.removeChild(list[item])
  }

}