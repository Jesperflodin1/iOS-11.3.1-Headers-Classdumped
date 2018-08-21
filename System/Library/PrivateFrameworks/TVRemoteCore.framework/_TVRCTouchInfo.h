/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@interface _TVRCTouchInfo : NSObject {

	BOOL _pendingCancellation;
	BOOL _isLikelyLongListScrollingEdgeGesture;
	long long _virtualPhase;
	double _timestamp;
	double _previousTimestamp;
	CGPoint _initialLocation;
	CGPoint _initialProportionalLocation;
	CGRect _boundingBox;

}

@property (assign,nonatomic) long long virtualPhase;                                 //@synthesize virtualPhase=_virtualPhase - In the implementation block
@property (assign,nonatomic) BOOL pendingCancellation;                               //@synthesize pendingCancellation=_pendingCancellation - In the implementation block
@property (assign,nonatomic) CGPoint initialLocation;                                //@synthesize initialLocation=_initialLocation - In the implementation block
@property (assign,nonatomic) CGRect boundingBox;                                     //@synthesize boundingBox=_boundingBox - In the implementation block
@property (assign,nonatomic) CGPoint initialProportionalLocation;                    //@synthesize initialProportionalLocation=_initialProportionalLocation - In the implementation block
@property (assign,nonatomic) BOOL isLikelyLongListScrollingEdgeGesture;              //@synthesize isLikelyLongListScrollingEdgeGesture=_isLikelyLongListScrollingEdgeGesture - In the implementation block
@property (assign,nonatomic) double timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double previousTimestamp;                               //@synthesize previousTimestamp=_previousTimestamp - In the implementation block
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(CGRect)boundingBox;
-(CGPoint)initialLocation;
-(void)setInitialLocation:(CGPoint)arg1 ;
-(void)setBoundingBox:(CGRect)arg1 ;
-(long long)virtualPhase;
-(void)setVirtualPhase:(long long)arg1 ;
-(BOOL)pendingCancellation;
-(void)setPendingCancellation:(BOOL)arg1 ;
-(CGPoint)initialProportionalLocation;
-(void)setInitialProportionalLocation:(CGPoint)arg1 ;
-(BOOL)isLikelyLongListScrollingEdgeGesture;
-(void)setIsLikelyLongListScrollingEdgeGesture:(BOOL)arg1 ;
-(double)previousTimestamp;
-(void)setPreviousTimestamp:(double)arg1 ;
@end

