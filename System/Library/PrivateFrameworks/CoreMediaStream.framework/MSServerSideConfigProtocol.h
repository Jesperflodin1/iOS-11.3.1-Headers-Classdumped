/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSServerSideConfigProtocolDelegate;
#import <CoreMediaStream/CoreMediaStream-Structs.h>
@class NSString, NSURL;

@interface MSServerSideConfigProtocol : NSObject {

	id<MSServerSideConfigProtocolDelegate> _delegate;
	NSString* _personID;
	NSURL* _configURL;
	MSSSCPCContext* _context;

}

@property (assign,nonatomic) id<MSServerSideConfigProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * personID;                                        //@synthesize personID=_personID - In the implementation block
-(NSString *)personID;
-(id<MSServerSideConfigProtocolDelegate>)delegate;
-(void)setDelegate:(id<MSServerSideConfigProtocolDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)_didFailAuthenticationWithError:(id)arg1 ;
-(void)queryConfiguration;
-(void)_didFinishWithResponse:(id)arg1 error:(id)arg2 ;
-(void)abort;
@end

