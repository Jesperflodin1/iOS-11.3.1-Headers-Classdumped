/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ResponseKit/ResponseKit-Structs.h>
#import <libobjc.A.dylib/RKDisplayStringsProvider.h>
#import <libobjc.A.dylib/RKPolarityDataProvider.h>

@class NSBundle, NSMutableDictionary;

@interface RKBundleDataProvider : NSObject <RKDisplayStringsProvider, RKPolarityDataProvider> {

	NSBundle* _bundle;
	NSMutableDictionary* _displayStringsByPlatformByLanguage;
	NSMutableDictionary* _polarityMapsByLanguageID;
	NSMutableDictionary* _localizationsByLanguageID;

}

@property (readonly) NSBundle * bundle;                                                     //@synthesize bundle=_bundle - In the implementation block
@property (readonly) NSMutableDictionary * displayStringsByPlatformByLanguage;              //@synthesize displayStringsByPlatformByLanguage=_displayStringsByPlatformByLanguage - In the implementation block
@property (readonly) NSMutableDictionary * polarityMapsByLanguageID;                        //@synthesize polarityMapsByLanguageID=_polarityMapsByLanguageID - In the implementation block
@property (retain) NSMutableDictionary * localizationsByLanguageID;                         //@synthesize localizationsByLanguageID=_localizationsByLanguageID - In the implementation block
-(id)init;
-(NSBundle *)bundle;
-(id)initWithBundle:(id)arg1 ;
-(id)displayStringsForPlatform:(id)arg1 languageID:(id)arg2 ;
-(NSMutableDictionary *)polarityMapsByLanguageID;
-(LSMMapRef)polarityMapForLanguageID:(id)arg1 ;
-(NSMutableDictionary *)displayStringsByPlatformByLanguage;
-(id)stringsFromTable:(id)arg1 forLanguageIdentifier:(id)arg2 ;
-(NSMutableDictionary *)localizationsByLanguageID;
-(void)setLocalizationsByLanguageID:(NSMutableDictionary *)arg1 ;
@end
