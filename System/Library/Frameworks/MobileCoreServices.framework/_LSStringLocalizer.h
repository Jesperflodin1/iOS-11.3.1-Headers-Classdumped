/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileCoreServices/MobileCoreServices-Structs.h>
@class NSURL, NSString, NSMutableDictionary, NSArray;

@interface _LSStringLocalizer : NSObject {

	NSURL* _url;
	BOOL _isMainBundle;
	NSString* _stringsFile;
	NSMutableDictionary* _stringsFileContent;
	NSMutableDictionary* _unlocalizedInfoPlistStrings;
	NSArray* _bundleLocalizations;

}
+(id)frameworkBundleLocalizer;
+(id)coreTypesLocalizer;
+(void)setPreferredLocalizationsForXCTests:(id)arg1 ;
+(id)preferredLocalizationsForXCTests;
+(id)queue;
-(id)_initWithBundleURL:(id)arg1 stringsFile:(id)arg2 keepBundle:(BOOL)arg3 ;
-(id)localizedStringWithString:(id)arg1 inBundle:(CFBundleRef)arg2 preferredLocalizations:(id)arg3 keep:(BOOL)arg4 ;
-(id)localizedStringWithString:(id)arg1 inBundle:(CFBundleRef)arg2 localeCode:(id)arg3 keep:(BOOL)arg4 ;
-(id)localizedStringWithString:(id)arg1 preferredLocalizations:(id)arg2 ;
-(id)initWithDatabase:(LSDatabase*)arg1 bundleUnit:(unsigned)arg2 delegate:(unsigned)arg3 ;
-(id)initWithDatabase:(LSDatabase*)arg1 pluginUnit:(unsigned)arg2 ;
-(id)stringsFileContentInBundle:(CFBundleRef)arg1 withLocaleCode:(id)arg2 keep:(BOOL)arg3 ;
-(id)localizedStringDictionaryWithString:(id)arg1 defaultValue:(id)arg2 ;
-(id)initWithBundleURL:(id)arg1 stringsFile:(id)arg2 ;
-(id)localizedStringsWithStrings:(id)arg1 preferredLocalizations:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(CFBundleRef)bundle;
@end

