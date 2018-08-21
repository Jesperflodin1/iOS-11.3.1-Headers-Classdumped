/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/DKExtensionAttributes.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSExtension, NSString, NSUUID, NSSet;

@interface DKReporterAttributes : NSObject <DKExtensionAttributes, NSCopying> {

	BOOL _headless;
	NSExtension* _extension;
	NSString* _bundleIdentifier;
	NSString* _name;
	NSString* _version;
	NSSet* _manifest;
	NSUUID* _uuid;

}

@property (nonatomic,retain) NSUUID * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * version;                           //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSSet * manifest;                             //@synthesize manifest=_manifest - In the implementation block
@property (nonatomic,readonly) NSExtension * extension;                      //@synthesize extension=_extension - In the implementation block
@property (getter=isHeadless,nonatomic,readonly) BOOL headless;              //@synthesize headless=_headless - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSExtension *)extension;
-(NSString *)version;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(BOOL)isHeadless;
-(id)initWithExtension:(id)arg1 ;
-(NSSet *)manifest;
-(void)_validateAndAddDomain:(NSString*)arg1 withInfo:(NSDictionary*)arg2 toManifest:(NSMutableSet*)arg3 ;
-(void)_validateAndAddExtensionManifest:(NSDictionary*)arg1 toManifest:(NSMutableSet*)arg2 ;
-(BOOL)isEqualToReportGeneratorAttributes:(id)arg1 ;
@end

