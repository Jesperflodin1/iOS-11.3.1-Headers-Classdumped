/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NEPathController : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _enabled;
	long long _cellularFallbackFlags;
	NSArray* _pathRules;
	NSArray* _payloadAppRules;

}

@property (copy) NSArray * payloadAppRules;                      //@synthesize payloadAppRules=_payloadAppRules - In the implementation block
@property (readonly) BOOL hasNonDefaultRules; 
@property (getter=isEnabled) BOOL enabled;                       //@synthesize enabled=_enabled - In the implementation block
@property (assign) long long cellularFallbackFlags;              //@synthesize cellularFallbackFlags=_cellularFallbackFlags - In the implementation block
@property (copy) NSArray * pathRules;                            //@synthesize pathRules=_pathRules - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)copyAggregatePathRules;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)pathRules;
-(NSArray *)payloadAppRules;
-(long long)cellularFallbackFlags;
-(void)setPathRules:(NSArray *)arg1 ;
-(void)setPayloadAppRules:(NSArray *)arg1 ;
-(void)setCellularFallbackFlags:(long long)arg1 ;
-(id)copyPathRuleBySigningIdentifier:(id)arg1 ;
-(BOOL)removePathRuleBySigningIdentifier:(id)arg1 ;
-(id)copyPathRuleSigningIdentifiers;
-(BOOL)hasNonDefaultRules;
@end

