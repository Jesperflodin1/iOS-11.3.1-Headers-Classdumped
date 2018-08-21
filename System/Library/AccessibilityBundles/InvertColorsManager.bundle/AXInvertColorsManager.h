/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:58:20 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/InvertColorsManager.bundle/InvertColorsManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXInvertColorsManager : NSObject {

	double _lastColorChangeNotification;

}
+(void)updateClassicInvertColors:(id)arg1 ;
+(void)traverseAppForInvertColors:(/*^block*/id)arg1 ;
+(void)_initializeMonitoring;
+(void)initialize;
-(void)_installCategories;
-(void)invertColorsDidChange;
-(void)_traverseAppForInvertColors;
-(void)_removeInvertFilter:(id)arg1 ;
-(id)_invertColorHelperClasses;
-(id)init;
@end

