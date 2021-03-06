/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_ATXAppPredictorScoreLogger.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject, NSString;

@interface _ATXAppPredictorJSONScoreLogger : NSObject <_ATXAppPredictorScoreLogger> {

	NSMutableDictionary* _history;
	unsigned char _consumerSubType;
	NSMutableArray* _subscoreHistories;
	NSObject*<OS_dispatch_queue> _fastQueue;
	NSObject*<OS_dispatch_queue> _slowQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)flush;
-(void)logInputs:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3 ;
-(void)setConsumerSubType:(unsigned char)arg1 ;
-(void)setPredictionClass:(id)arg1 ;
-(void)setAssetVersion:(unsigned long long)arg1 ;
-(void)setCacheAge:(double)arg1 ;
@end

