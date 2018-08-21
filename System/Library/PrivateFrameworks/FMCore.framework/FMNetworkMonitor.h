/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject {

	NWPathEvaluator* _evaluator;

}

@property (nonatomic,retain) NWPathEvaluator * evaluator;              //@synthesize evaluator=_evaluator - In the implementation block
+(id)sharedInstance;
-(void)stopMonitoring;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setEvaluator:(NWPathEvaluator *)arg1 ;
-(NWPathEvaluator *)evaluator;
-(BOOL)isNetworkUp;
-(void)registerNetworkMonitorLaunchEvent:(BOOL)arg1 ;
-(void)startMonitoring;
-(BOOL)isMonitoring;
@end

