/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AppleEthernetSettingsPreferences.bundle/AppleEthernetSettingsPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AppleEthernetInterface : NSObject {

	NSString* _displayName;
	NSString* _BSDName;

}

@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * BSDName;                  //@synthesize BSDName=_BSDName - In the implementation block
-(void)setBSDName:(NSString *)arg1 ;
-(NSString *)BSDName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayName;
@end
