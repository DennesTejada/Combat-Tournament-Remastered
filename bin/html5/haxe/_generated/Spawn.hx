package ;

@:access(swf.exporters.animate)

class Spawn extends #if flash flash.display.MovieClip.MovieClip2 #else openfl.display.MovieClip #end
{
	

	public function new()
	{
		var library = swf.exporters.animate.AnimateLibrary.get("HiIpRtKCUnBVtWhA1qp9");
		var symbol = library.symbols.get(2);
		symbol.__init(library);

		super();
	}
}