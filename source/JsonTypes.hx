package;

typedef NoteJson =
{
	var type:Int;
	var holdLength:Int;
	var time:Int;
	var sliderPoints:Array<Int>;
	var position:Array<Int>;
}

typedef BPMJson =
{
	var bpm:Float;
	var time:Int;
}

typedef ChartJson =
{
	var author:Array<String>;
	var bpmList:Array<BPMJson>;
	var charter:Array<String>;
	var chart:Array<NoteJson>;
}

class JsonTypes {}
