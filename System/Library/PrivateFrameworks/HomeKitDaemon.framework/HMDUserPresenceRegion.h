/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface HMDUserPresenceRegion : NSObject {

	unsigned long long _value;

}

@property (nonatomic,readonly) NSNumber * number; 
@property (nonatomic,readonly) unsigned long long value;              //@synthesize value=_value - In the implementation block
+(id)regionWithDict:(id)arg1 ;
+(id)regionWithValue:(unsigned long long)arg1 ;
+(id)regionWithNumber:(id)arg1 ;
+(id)regionWithMessage:(id)arg1 ;
+(id)regionWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)value;
-(void)addToCoder:(id)arg1 ;
-(void)addToPayload:(id)arg1 ;
-(id)initWithNumber:(id)arg1 ;
-(NSNumber *)number;
@end

