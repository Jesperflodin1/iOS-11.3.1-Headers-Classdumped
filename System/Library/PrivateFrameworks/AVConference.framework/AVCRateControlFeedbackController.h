/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class AVCStatisticsCollector;

@interface AVCRateControlFeedbackController : NSObject {

	unsigned _mode;
	AVCStatisticsCollector* _statisticsCollector;
	unsigned _feedbackMessageCount;

}

@property (assign,nonatomic) unsigned mode;                                             //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) AVCStatisticsCollector * statisticsCollector;              //@synthesize statisticsCollector=_statisticsCollector - In the implementation block
-(void)dealloc;
-(unsigned)mode;
-(void)setMode:(unsigned)arg1 ;
-(void)setStatisticsCollector:(AVCStatisticsCollector *)arg1 ;
-(AVCStatisticsCollector *)statisticsCollector;
-(BOOL)getRateControlFeedbackMessage:(id*)arg1 type:(unsigned)arg2 metaData:(id*)arg3 error:(id*)arg4 ;
-(SCD_Struct_AV4)translateRateControlFeedbackMessageFromData:(id)arg1 ;
-(BOOL)processRateControlFeedbackMessage:(SCD_Struct_AV4)arg1 type:(unsigned)arg2 error:(id*)arg3 ;
-(id)getRateControlDataWithStatistics:(id)arg1 ;
-(BOOL)getFeedbackMessage:(id*)arg1 type:(unsigned)arg2 metaData:(id*)arg3 error:(id*)arg4 ;
-(BOOL)processFeedbackMessage:(id)arg1 type:(unsigned)arg2 metaData:(id)arg3 error:(id*)arg4 ;
-(BOOL)processRateControlProbingMessage:(SCD_Struct_AV6)arg1 type:(unsigned)arg2 error:(id*)arg3 ;
-(SCD_Struct_AV4)translateAFRCFeedbackMessage:(tagAFRCFB)arg1 ;
-(BOOL)translateMediaControlInfo:(void*)arg1 feedbackMessage:(SCD_Struct_AV4*)arg2 ;
@end

