/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFAWDEvent.h>

@class PBCodable, NSString;

@interface WFUserJoinEvent : NSObject <WFAWDEvent> {

	unsigned _metricIdentifier;
	PBCodable* _metric;

}

@property (assign,nonatomic) unsigned metricIdentifier;              //@synthesize metricIdentifier=_metricIdentifier - In the implementation block
@property (nonatomic,retain) PBCodable * metric;                     //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)joinEventWithType:(long long)arg1 security:(long long)arg2 ;
-(void)setMetric:(PBCodable *)arg1 ;
-(unsigned)_metricIdForType:(long long)arg1 ;
-(unsigned)metricIdentifier;
-(void)setMetricIdentifier:(unsigned)arg1 ;
-(id)initWithType:(long long)arg1 security:(long long)arg2 ;
-(PBCodable *)metric;
@end

