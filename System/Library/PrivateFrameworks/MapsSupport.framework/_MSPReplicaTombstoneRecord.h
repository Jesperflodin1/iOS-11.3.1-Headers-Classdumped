/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@protocol MSPReplicaRecord;
@interface _MSPReplicaTombstoneRecord : NSProxy {

	id<MSPReplicaRecord> _record;

}
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)contents;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)contentsTimestamp;
-(id)_initWithRecord:(id)arg1 ;
@end
