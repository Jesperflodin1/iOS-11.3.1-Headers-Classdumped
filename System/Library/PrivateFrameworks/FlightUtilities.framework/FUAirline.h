/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface FUAirline : NSObject <NSCopying, NSSecureCoding> {

	NSString* _IATACode;
	NSString* _FAACode;
	NSString* _name;
	NSString* _phoneNumber;
	NSURL* _URL;

}

@property (retain) NSString * IATACode;                 //@synthesize IATACode=_IATACode - In the implementation block
@property (retain) NSString * FAACode;                  //@synthesize FAACode=_FAACode - In the implementation block
@property (retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (retain) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (retain) NSURL * URL;                         //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)IATACode;
-(NSString *)FAACode;
-(void)setIATACode:(NSString *)arg1 ;
-(void)setFAACode:(NSString *)arg1 ;
@end

