/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 9:31:58 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CBClient;

@interface AXBBlueLightManager : NSObject {

	CBClient* _brightnessClient;
	BOOL _blueLightStatusEnabled;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(BOOL)supportsBlueLightReduction;
-(void)disableBrightnessFilters;
-(BOOL)brightnessFiltersEnabled;
-(BOOL)blueLightStatusEnabled;
-(void)restoreCachedBrightnessFilters;
-(BOOL)adaptationEnabled;
-(BOOL)supportsAdaptation;
@end

