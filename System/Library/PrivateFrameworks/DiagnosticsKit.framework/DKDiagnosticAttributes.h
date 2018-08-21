/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/DKExtensionAttributes.h>

@class NSExtension, NSNumber, NSString;

@interface DKDiagnosticAttributes : NSObject <DKExtensionAttributes> {

	BOOL _headless;
	BOOL _restricted;
	BOOL _requiresUnlock;
	NSExtension* _extension;
	NSString* _bundleIdentifier;
	NSNumber* _identifier;
	NSString* _name;
	NSString* _version;
	NSNumber* _freeSpaceRequired;

}

@property (nonatomic,readonly) NSNumber * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSNumber * freeSpaceRequired;                     //@synthesize freeSpaceRequired=_freeSpaceRequired - In the implementation block
@property (getter=isHeadless,nonatomic,readonly) BOOL headless;                  //@synthesize headless=_headless - In the implementation block
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted;              //@synthesize restricted=_restricted - In the implementation block
@property (nonatomic,readonly) BOOL requiresUnlock;                              //@synthesize requiresUnlock=_requiresUnlock - In the implementation block
@property (nonatomic,readonly) NSExtension * extension;                          //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(NSString *)name;
-(NSNumber *)identifier;
-(NSString *)bundleIdentifier;
-(NSExtension *)extension;
-(NSString *)version;
-(BOOL)isRestricted;
-(BOOL)isHeadless;
-(id)initWithExtension:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 version:(id)arg2 freeSpaceRequired:(id)arg3 name:(id)arg4 headless:(BOOL)arg5 ;
-(NSNumber *)freeSpaceRequired;
-(BOOL)requiresUnlock;
@end

