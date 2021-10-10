class ACE_SelfActions: ACE_SelfActions
{
    class RD501_Style_Changer
    {
        displayName="Change Style";
        exceptions[]=
        {
            "isNotInside",
            "isNotSwimming",
            "isNotSitting"
        };
        condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
        showDisabled=0;
        priority=2;
		
        class RD501_NoseArt_None
        {
            displayName="None";
            exceptions[]=
            {
                "isNotInside",
                "isNotSwimming",
                "isNotSitting"
            };
            condition="!(isNull objectParent player)";
            statement="_target setObjectTextureGlobal [1,'RD501_Laat\textures\laat\Laat501stcxx\Laat501stBodycxx.paa']";
            showDisabled=0;
            runOnHover=0;
            priority=2.5;
        };
		
        class RD501_NoseArt_padme: RD501_NoseArt_None
        {
            displayName="Padme";
            statement="_target setObjectTextureGlobal [1, 'RD501_Laat\textures\laat_mk4\cxx_padme.paa']";
        };
		
        class RD501_NoseArt_bby: RD501_NoseArt_None
        {
            displayName="420 BBY";
            statement="_target setObjectTextureGlobal [1, 'RD501_Laat\textures\laat_mk4\cxx_bby.paa']";
        };
    };
};