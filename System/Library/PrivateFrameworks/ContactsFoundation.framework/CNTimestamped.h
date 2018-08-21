/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNTimestamped : NSObject {

	id _value;
	double _timestamp;

}

@property (nonatomic,readonly) id value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(/*^block*/id)wrapTransformWithScheduler:(id)arg1 ;
+(id)timestampedWithValue:(id)arg1 timestamp:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(id)value;
-(id)initWithValue:(id)arg1 timestamp:(double)arg2 ;
@end

