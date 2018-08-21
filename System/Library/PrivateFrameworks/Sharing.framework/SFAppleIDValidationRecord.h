/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDate, NSArray, NSNumber;

@interface SFAppleIDValidationRecord : NSObject <NSSecureCoding> {

	NSString* _altDSID;
	NSData* _data;
	NSString* _identifier;
	NSDate* _nextCheckDate;
	unsigned long long _suggestedValidDuration;
	NSArray* _validatedEmailHashes;
	NSArray* _validatedPhoneHashes;
	NSDate* _validStartDate;
	NSNumber* _version;

}

@property (nonatomic,retain) NSString * altDSID;                                     //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL needsUpdate; 
@property (nonatomic,retain) NSDate * nextCheckDate;                                 //@synthesize nextCheckDate=_nextCheckDate - In the implementation block
@property (assign,nonatomic) unsigned long long suggestedValidDuration;              //@synthesize suggestedValidDuration=_suggestedValidDuration - In the implementation block
@property (nonatomic,retain) NSArray * validatedEmailHashes;                         //@synthesize validatedEmailHashes=_validatedEmailHashes - In the implementation block
@property (nonatomic,retain) NSArray * validatedPhoneHashes;                         //@synthesize validatedPhoneHashes=_validatedPhoneHashes - In the implementation block
@property (nonatomic,retain) NSDate * validStartDate;                                //@synthesize validStartDate=_validStartDate - In the implementation block
@property (nonatomic,retain) NSNumber * version;                                     //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)needsUpdate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
-(BOOL)isEqualToValidationRecord:(id)arg1 ;
-(NSDate *)nextCheckDate;
-(unsigned long long)suggestedValidDuration;
-(NSArray *)validatedEmailHashes;
-(NSArray *)validatedPhoneHashes;
-(NSDate *)validStartDate;
-(void)setNextCheckDate:(NSDate *)arg1 ;
-(void)setSuggestedValidDuration:(unsigned long long)arg1 ;
-(void)setValidatedEmailHashes:(NSArray *)arg1 ;
-(void)setValidatedPhoneHashes:(NSArray *)arg1 ;
-(void)setValidStartDate:(NSDate *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
@end

