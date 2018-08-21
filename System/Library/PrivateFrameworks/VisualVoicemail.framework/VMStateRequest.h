/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VisualVoicemail/VisualVoicemail-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VMStateRequest : NSObject <NSCopying, NSSecureCoding> {

	NSString* _destination;
	long long _identifier;
	NSString* _message;
	NSString* _serviceCenter;

}

@property (nonatomic,readonly) NSString * destination;                //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) long long identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * message;                    //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSString * serviceCenter;              //@synthesize serviceCenter=_serviceCenter - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(long long)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)message;
-(NSString *)destination;
-(NSString *)serviceCenter;
-(id)initWithStateRequest:(id)arg1 ;
-(BOOL)isEqualToStateRequest:(id)arg1 ;
-(id)initWithDestination:(id)arg1 serviceCenter:(id)arg2 ;
@end
