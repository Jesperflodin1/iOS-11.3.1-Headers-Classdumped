/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/CopicSettings.bundle/CopicSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CopicSettings/CopicSettings-Structs.h>
#import <libcopic.dylib/CopicBaseMessagesSettingsController.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class NSMutableDictionary, NSString;

@interface CopicSettingsController : CopicBaseMessagesSettingsController <MFMailComposeViewControllerDelegate> {

	NSMutableDictionary* _settings;

}

@property (nonatomic,retain) NSMutableDictionary * settings;              //@synthesize settings=_settings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateSettingsDict:(id)arg1 forKey:(id)arg2 ;
-(id)settingsFilePath;
-(BOOL)isWhatsAppInstalled;
-(BOOL)isBiteSMSInstalled;
-(id)hideOtherSpecifiers:(id)arg1 ;
-(void)copicEnabledOrDisabled:(id)arg1 specifier:(id)arg2 ;
-(NSMutableDictionary *)settings;
-(void)setSettings:(NSMutableDictionary *)arg1 ;
-(id)initForContentSize:(CGSize)arg1 ;
-(void)writeSettings;
-(id)specifiers;
@end

