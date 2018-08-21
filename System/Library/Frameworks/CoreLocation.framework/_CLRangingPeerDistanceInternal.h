/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _CLRangingPeer, NSDate, NSNumber;

@interface _CLRangingPeerDistanceInternal : NSObject <NSCopying> {

	_CLRangingPeer* _peer;
	NSDate* _date;
	NSNumber* _distanceMeters;
	NSNumber* _accuracyMeters;
	BOOL _initiator;
	BOOL _shouldUnlock;

}
-(id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(BOOL)arg5 shouldUnlock:(BOOL)arg6 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

