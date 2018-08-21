/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSDate, NSError;

@interface WFOperation : NSOperation {

	BOOL _finished;
	NSDate* _start;
	NSError* _error;

}

@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)name;
-(void)start;
-(BOOL)isFinished;
-(void)finish;
-(BOOL)isReady;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end

