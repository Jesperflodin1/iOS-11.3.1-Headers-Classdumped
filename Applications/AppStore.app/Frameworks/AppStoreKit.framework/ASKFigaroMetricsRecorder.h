/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:42:07 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Applications/AppStore.app/Frameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSMetricsController;

@interface ASKFigaroMetricsRecorder : NSObject {

	SSMetricsController* _metricsController;

}

@property (nonatomic,retain) SSMetricsController * metricsController;              //@synthesize metricsController=_metricsController - In the implementation block
-(id)initWithMetricsConfiguration:(id)arg1 ;
-(void)recordEventToTopic:(id)arg1 withDictionary:(id)arg2 ;
-(void)recordWithEventData:(id)arg1 to:(id)arg2 ;
-(void)flush;
-(SSMetricsController *)metricsController;
-(void)setMetricsController:(SSMetricsController *)arg1 ;
@end

