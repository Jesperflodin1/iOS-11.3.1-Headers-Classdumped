/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PAGenealogyTimestampedMessage : NSObject {

	double _machTime;
	unsigned long long _activityId;

}

@property (readonly) double machTime;                            //@synthesize machTime=_machTime - In the implementation block
@property (readonly) unsigned long long activityId;              //@synthesize activityId=_activityId - In the implementation block
@property (readonly) NSString * message; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)message;
-(double)machTime;
-(unsigned long long)activityId;
-(id)initWithActivityId:(unsigned long long)arg1 atMachTime:(double)arg2 ;
-(long long)compareToOtherMessage:(id)arg1 ;
@end

