/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCRateControlOWRDEstimator : NSObject {

	unsigned _firstSendTimestamp;
	unsigned _previousSendTimestamp;
	unsigned _previousSendTimestampDiff;
	int _sendTimestampWrappedAround;
	double _firstSendTime;
	unsigned _firstReceiveTimestamp;
	unsigned _previousReceiveTimestamp;
	unsigned _previousReceiveTimestampDiff;
	int _receiveTimestampWrappedAround;
	double _firstReceiveTime;
	double _shortAverageLag;
	double _longAverageLag;
	double _owrd;

}

@property (nonatomic,readonly) double owrd;              //@synthesize owrd=_owrd - In the implementation block
-(double)relativeReceiveTimeWithTimestamp:(unsigned short)arg1 timestampRate:(unsigned short)arg2 ;
-(void)calculateOWRDWithSendTime:(double)arg1 receiveTime:(double)arg2 ;
-(double)owrd;
-(double)relativeSendTimeWithTimestamp:(unsigned)arg1 timestampRate:(unsigned)arg2 ;
@end

