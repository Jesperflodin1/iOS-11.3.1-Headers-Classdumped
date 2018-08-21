/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel;
@class NSString;

@interface TSPSnappyReadChannel : NSObject <TSUStreamReadChannel> {

	id<TSUStreamReadChannel> _readChannel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)processData:(id*)arg1 isDone:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(id)uncompressDataFromSource:(SnappySource*)arg1 ;
-(id)uncompressData:(id)arg1 ;
-(void)dealloc;
-(void)close;
-(id)initWithReadChannel:(id)arg1 ;
-(void)readWithHandler:(/*^block*/id)arg1 ;
@end
