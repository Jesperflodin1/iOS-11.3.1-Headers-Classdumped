/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSFetchMetricsControllerDataSource;
@interface MSFetchMetricsController : NSObject {

	double _startTime;
	id<MSFetchMetricsControllerDataSource> _dataSource;

}

@property (nonatomic,__weak,readonly) id<MSFetchMetricsControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id<MSFetchMetricsControllerDataSource>)dataSource;
-(void)start;
-(void)stopAndSubmitWithOptions:(unsigned long long)arg1 fetchSize:(unsigned long long)arg2 ;
-(id)initWithDataSource:(id)arg1 ;
@end
