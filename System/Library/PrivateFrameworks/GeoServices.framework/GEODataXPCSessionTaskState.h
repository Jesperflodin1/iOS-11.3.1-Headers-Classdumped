/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOCapturedState.h>

@class NSError, GEODataRequestState;

@interface GEODataXPCSessionTaskState : GEOCapturedState {

	long long _rawPointer;
	unsigned _taskIdentifier;
	unsigned _receivedDataLength;
	NSError* _error;
	double _now;
	double _startTime;
	double _endTime;
	GEODataRequestState* _requestState;

}
+(const char*)decoderType;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
