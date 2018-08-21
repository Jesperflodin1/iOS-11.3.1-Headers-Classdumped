/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPComponentWriteChannel.h>

@protocol OS_dispatch_queue;
@class NSObject, TSUFileIOChannel, NSError, NSString;

@interface TSPComponentWriteChannelAdapter : NSObject <TSPComponentWriteChannel> {

	NSObject*<OS_dispatch_queue> _queue;
	TSUFileIOChannel* _channel;
	/*^block*/id _handler;
	NSError* _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithChannel:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_close;
-(void)writeData:(id)arg1 ;
-(void)close;
-(void)setError:(id)arg1 ;
@end

