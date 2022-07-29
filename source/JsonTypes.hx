package;

typedef NoteJson =
{
	var note:Int;
	var time:Int;
	var sliderPoints:Array<Int>;
	var position:Array<Int>;
}

typedef BPMJson =
{
	var bpm:Int;
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
