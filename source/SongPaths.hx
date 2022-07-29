package;

class SongPaths
{
	static public function songChartPath(songName:String, songDifficulty:String):String
	{
		return 'assets/data/songs/' + songName + '-' + songDifficulty + '.json';
	}
}