/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSMTIEValue : NSObject {

	double _observationInterval;
	double _mtie;

}

@property (nonatomic,readonly) double observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
@property (nonatomic,readonly) double mtie;                             //@synthesize mtie=_mtie - In the implementation block
-(id)description;
-(double)observationInterval;
-(id)initWithObservationInterval:(double)arg1 andMTIE:(double)arg2 ;
-(double)mtie;
@end

