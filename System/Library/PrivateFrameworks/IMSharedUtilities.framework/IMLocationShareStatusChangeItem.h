/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <IMSharedUtilities/IMRemoteObjectCoding.h>

@class NSString;

@interface IMLocationShareStatusChangeItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding> {

	BOOL _actionable;
	BOOL _expired;
	long long _status;
	NSString* _otherCountryCode;
	NSString* _otherHandle;
	NSString* _otherUnformattedID;
	long long _direction;

}

@property (assign,nonatomic) long long status;                           //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long direction;                        //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) BOOL actionable;                            //@synthesize actionable=_actionable - In the implementation block
@property (assign,nonatomic) BOOL expired;                               //@synthesize expired=_expired - In the implementation block
@property (nonatomic,retain) NSString * otherHandle;                     //@synthesize otherHandle=_otherHandle - In the implementation block
@property (nonatomic,retain) NSString * otherUnformattedID;              //@synthesize otherUnformattedID=_otherUnformattedID - In the implementation block
@property (nonatomic,retain) NSString * otherCountryCode;                //@synthesize otherCountryCode=_otherCountryCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(void)setStatus:(long long)arg1 ;
-(long long)status;
-(NSString *)otherUnformattedID;
-(NSString *)otherCountryCode;
-(BOOL)isLastMessageCandidate;
-(BOOL)expired;
-(BOOL)actionable;
-(void)setExpired:(BOOL)arg1 ;
-(NSString *)otherHandle;
-(void)setOtherHandle:(NSString *)arg1 ;
-(id)copyDictionaryRepresentation;
-(void)setOtherUnformattedID:(NSString *)arg1 ;
-(void)setOtherCountryCode:(NSString *)arg1 ;
-(void)setActionable:(BOOL)arg1 ;
@end

