package;

import JsonTypes;
import haxe.Timer;

class Conductor
{
	var BPMList:Array<BPMJson>;
	var currentBPM:Int;
	var currentBPM_Time:Int;
	var lastBPMCheck:Int = 0;

	// some pause shit
	var startTime:Int;
	var pauseTime:Int;
	var pauseStart:Int;
	var paused:Bool = false;

	public function new(bpmList:Array<BPMJson>)
	{
		startTime = Math.floor(Timer.stamp() * 1000);
		this.currentBPM = bpmList[0].bpm;
	}

	public function getMil():Int
	{
		if (paused)
			return Math.floor(Timer.stamp() * 1000) - (startTime + pauseTime + (Math.floor(Timer.stamp() * 1000) - pauseStart));

		return Math.floor(Timer.stamp() * 1000) - (startTime + pauseTime);
	}

	public function isPastLastBPMChange():Bool
	{
		for (i in 0...BPMList.length)
		{
			var pointer = BPMList.length - i;
			if (BPMList[pointer].time < getMil())
			{
				currentBPM = BPMList[pointer].bpm;
				currentBPM_Time = BPMList[pointer].time;
				lastBPMCheck = BPMList[pointer].time;
			}
		}

		if (getMil() > lastBPMCheck + (currentBPM * 60000))
		{
			lastBPMCheck = getMil();
			return true;
		}
		return false;
	}

	public function pause()
	{
		if (paused)
			return;
		paused = true;
		pauseStart = Math.floor(Timer.stamp() * 1000);
	}

	public function start()
	{
		if (!paused)
			return;
		paused = false;
		pauseTime += Math.floor(Timer.stamp() * 1000) - pauseStart;
		pauseStart = 0;
	}
}
