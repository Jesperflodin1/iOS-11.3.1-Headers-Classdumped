/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableSet, NSSet;

@interface SUScanOptions : NSObject <NSSecureCoding> {

	NSString* _identifier;
	BOOL _forced;
	NSMutableSet* _types;
	NSString* _requestedPMV;
	BOOL _MDMUseDelayPeriod;

}

@property (nonatomic,retain) NSSet * types;                            //@synthesize types=_types - In the implementation block
@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isForced,nonatomic) BOOL forced;              //@synthesize forced=_forced - In the implementation block
@property (nonatomic,retain) NSString * requestedPMV;                  //@synthesize requestedPMV=_requestedPMV - In the implementation block
@property (assign,nonatomic) BOOL MDMUseDelayPeriod;                   //@synthesize MDMUseDelayPeriod=_MDMUseDelayPeriod - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)addType:(int)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(NSSet *)types;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isForced;
-(void)clearTypes;
-(void)setTypes:(NSSet *)arg1 ;
-(NSString *)requestedPMV;
-(void)setRequestedPMV:(NSString *)arg1 ;
-(void)setMDMUseDelayPeriod:(BOOL)arg1 ;
-(BOOL)containsType:(int)arg1 ;
-(BOOL)MDMUseDelayPeriod;
-(void)removeType:(int)arg1 ;
-(BOOL)findsAnyUpdate;
-(void)setForced:(BOOL)arg1 ;
@end

