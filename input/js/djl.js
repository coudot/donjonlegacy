$(document).ready(function() {
	$.getJSON( "/events.json", function( data ) {
		var items = [];
		var max = 3;
		var nb = 0;
		$.each( data, function( key, val ) {
			var now = Date.now();
			var start = new Date(val.start);
			var end = new Date(val.end);
			var time = end.getTime();
			var display = start.getDate() + "/" + (start.getMonth() + 1) + "/" + start.getFullYear();
			if ( end.getDate() > start.getDate() ) {
				display = display + " - " + end.getDate() + "/" + (end.getMonth() + 1) + "/" + end.getFullYear();
			}
			if ( (time > now) && ( nb <= max) ) {
				nb++;
				items.push( "<p id='" + key + "'>" + display + "<br /><a href="+val.link+" target='_blank'>" + val.name + "</a></p>" );
			}
		});

		$( "<div/>", {
			"class": "agenda",
			html: items.join( "" )
		}).appendTo( "div.events" );
	});
});
