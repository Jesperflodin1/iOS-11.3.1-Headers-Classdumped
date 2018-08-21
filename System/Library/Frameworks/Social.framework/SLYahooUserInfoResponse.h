/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface SLYahooUserInfoResponse : NSObject {

	long long _statusCode;
	NSString* _displayName;
	NSString* _emailAddress;
	NSError* _error;
	NSString* _errorMessage;

}

@property (readonly) long long statusCode;                 //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (readonly) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(long long)statusCode;
-(NSString *)displayName;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(NSError *)error;
-(NSString *)emailAddress;
-(NSString *)errorMessage;
@end
