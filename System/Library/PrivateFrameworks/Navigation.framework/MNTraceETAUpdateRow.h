/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNTracePlayerTimelineStreamObjectType.h>

@class GEOETATrafficUpdateRequest, GEOETATrafficUpdateResponse, NSError, NSString;

@interface MNTraceETAUpdateRow : NSObject <MNTracePlayerTimelineStreamObjectType> {

	double _requestTimestamp;
	double _responseTimestamp;
	GEOETATrafficUpdateRequest* _request;
	GEOETATrafficUpdateResponse* _response;
	NSError* _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double position; 
@property (assign,nonatomic) double requestTimestamp;                             //@synthesize requestTimestamp=_requestTimestamp - In the implementation block
@property (assign,nonatomic) double responseTimestamp;                            //@synthesize responseTimestamp=_responseTimestamp - In the implementation block
@property (nonatomic,retain) GEOETATrafficUpdateRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) GEOETATrafficUpdateResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
-(void)setRequest:(GEOETATrafficUpdateRequest *)arg1 ;
-(void)setResponse:(GEOETATrafficUpdateResponse *)arg1 ;
-(GEOETATrafficUpdateResponse *)response;
-(GEOETATrafficUpdateRequest *)request;
-(double)position;
-(double)requestTimestamp;
-(void)setRequestTimestamp:(double)arg1 ;
-(double)responseTimestamp;
-(void)setResponseTimestamp:(double)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end

