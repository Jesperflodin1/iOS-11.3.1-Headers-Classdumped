/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary, NSUserDefaults;

@interface _UIFeedbackPreferences : NSObject {

	NSMutableDictionary* _enabledFeedbackTypes;
	NSDictionary* _defaultFeedbackTypes;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,readonly) NSDictionary * defaultFeedbackTypes;              //@synthesize defaultFeedbackTypes=_defaultFeedbackTypes - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                      //@synthesize userDefaults=_userDefaults - In the implementation block
+(id)sharedPreferences;
-(id)init;
-(unsigned long long)enabledFeedbackTypesForCategory:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_invalidate;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)_startObservingDefaults;
-(id)_categoryForNullableCategory:(id)arg1 ;
-(id)_categoryKeyForCategory:(id)arg1 type:(unsigned long long)arg2 ;
-(id)_defaultKeyForCategoryKey:(id)arg1 type:(unsigned long long)arg2 ;
-(void)_accessibilityForceTouchChanged:(id)arg1 ;
-(unsigned long long)_enabledFeedbackTypesForCategory:(id)arg1 ;
-(void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forCategory:(id)arg2 postNotification:(BOOL)arg3 ;
-(unsigned long long)_defaultFeedbackTypesForCategory:(id)arg1 ;
-(void)_updateEnabledFeedbackTypes:(unsigned long long*)arg1 forKey:(id)arg2 type:(unsigned long long)arg3 ;
-(void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forCategory:(id)arg2 ;
-(NSDictionary *)defaultFeedbackTypes;
@end
