/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class _IMPingPacketData, NSMutableArray, NSMutableString, IMPingStatistics;

@interface _IMPingStatisticsCollector : NSObject {

	_IMPingPacketData* _timestampArray[160];
	NSMutableArray* _roundTriptimes;
	NSMutableString* _stringToWriteToFile;
	IMPingStatistics* _stats;

}
-(id)init;
-(void)dealloc;
-(id)pingStats;
-(double)_computeMedianTime:(id)arg1 ;
-(double)_computeStandardDeviation:(id)arg1 numPings:(int)arg2 averageRTT:(double)arg3 ;
-(void)addEchoPacket:(int)arg1 packetTimestamp:(timeval)arg2 error:(int)arg3 ;
-(timeval)timeSentForPacket:(int)arg1 ;
-(void)addEchoReplyPacket:(int)arg1 ;
-(void)timeoutOldSequenceNumbers:(double)arg1 ;
-(BOOL)logStatsToFile:(id)arg1 error:(id*)arg2 ;
-(id)pingStatsForLastNSeconds:(double)arg1 ;
@end

