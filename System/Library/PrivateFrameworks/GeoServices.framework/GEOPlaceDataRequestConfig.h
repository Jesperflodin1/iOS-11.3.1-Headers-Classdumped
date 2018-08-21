/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOServiceRequestDefaultConfig.h>

@class NSNumber;

@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig {

	double _timeout;
	unsigned long long _urlType;
	NSNumber* _requestPriority;

}
-(unsigned long long)urlType;
-(int)dataRequestKindForRequest:(id)arg1 ;
-(id)additionalHTTPHeaders;
-(id)serviceTypeNumber;
-(BOOL)shouldThrottleRequests;
-(long long)experimentType;
-(int)experimentDispatcherRequestTypeForRequest:(id)arg1 ;
-(unsigned char)requestCounterInfoTypeForRequest:(id)arg1 ;
-(id)initWithTimeout:(double)arg1 request:(id)arg2 traits:(id)arg3 ;
-(double)timeout;
@end
