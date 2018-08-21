/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString;

@interface NEPluginPreferences : NSObject {

	SCPreferencesRef _prefs;
	NSString* _pluginType;

}

@property (assign) SCPreferencesRef prefs;               //@synthesize prefs=_prefs - In the implementation block
@property (readonly) NSString * pluginType;              //@synthesize pluginType=_pluginType - In the implementation block
+(void)removePreferencesForPluginType:(id)arg1 ;
+(id)copyIdentifiersOfInstalledVPNApps;
+(BOOL)isAppInstalled:(id)arg1 ;
+(BOOL)isEnabledForPluginType:(id)arg1 applicationRemoved:(BOOL)arg2 ;
-(void)dealloc;
-(id)initWithPluginType:(id)arg1 ;
-(NSString *)pluginType;
-(SCPreferencesRef)prefs;
-(id)copyAppURL;
-(BOOL)isPluginTypeEnabled;
-(void)setPluginTypeEnabled:(BOOL)arg1 appURLData:(id)arg2 ;
-(BOOL)isFlagSet:(CFStringRef)arg1 ;
-(BOOL)setPreferences:(CFDictionaryRef)arg1 ofType:(long long)arg2 configurationIdentifier:(id)arg3 ;
-(CFDictionaryRef)copyPersistentDataOfType:(long long)arg1 configurationIdentifier:(id)arg2 ;
-(void)setPrefs:(SCPreferencesRef)arg1 ;
@end

