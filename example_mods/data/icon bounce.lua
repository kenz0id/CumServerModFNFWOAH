function onUpdatePost()
	setTextFont("scoreTxt", "");
	setTextFont("timeTxt", "");
	setTextFont("botplayTxt", "");
	setTextString('botplayTxt', "CHEATER");
	setProperty("iconP1.scale.y", (getProperty("iconP1.scale.y") - 1) / -2 + 1)
	setProperty("iconP2.scale.y", (getProperty("iconP2.scale.y") - 1) / -2 + 1)
	setProperty("iconP1.y", 500 + (getProperty("iconP1.scale.y") * 75))
	setProperty("iconP2.y", 500 + (getProperty("iconP2.scale.y") * 75))
end