/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCRedundancyControllerProtocol.h>

@protocol VCRedundancyControlAlgorithm;
@class AVCStatisticsCollector, NSString;

@interface VCRedundancyControllerAudio : NSObject <VCRedundancyControllerProtocol> {

	id _redundancyControllerDelegate;
	AVCStatisticsCollector* _statisticsCollector;
	unsigned _mode;
	id<VCRedundancyControlAlgorithm> _algorithm;
	unsigned _currentRedundancyPercentage;
	double _currentRedundancyInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV10)arg1 ;
-(void)reportRedundancyPercentage:(unsigned)arg1 redundancyInterval:(double)arg2 ;
-(id)initWithDelegate:(id)arg1 statisticsCollector:(id)arg2 mode:(unsigned)arg3 ;
@end
