/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSUStreamReadChannel.h>

@protocol SFUInputStream, OS_dispatch_queue;
@class SFUDataRepresentation, NSObject, NSString;

@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel> {

	SFUDataRepresentation* _representation;
	id<SFUInputStream> _inputStream;
	NSObject*<OS_dispatch_queue> _readQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithRepresentation:(id)arg1 ;
@end

