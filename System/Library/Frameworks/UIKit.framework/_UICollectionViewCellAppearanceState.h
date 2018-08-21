/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UICollectionViewCellAppearanceState : NSObject {

	BOOL _hasLifted;
	BOOL _hasBeganCancelling;
	int _dragState;

}

@property (assign,nonatomic) int dragState;                                       //@synthesize dragState=_dragState - In the implementation block
@property (assign,nonatomic) BOOL hasLifted;                                      //@synthesize hasLifted=_hasLifted - In the implementation block
@property (assign,nonatomic) BOOL hasBeganCancelling;                             //@synthesize hasBeganCancelling=_hasBeganCancelling - In the implementation block
@property (nonatomic,readonly) long long appearance; 
@property (nonatomic,readonly) BOOL hasBeganDroppingInto; 
@property (nonatomic,readonly) BOOL enrouteToOrReachedTerminalState; 
-(id)init;
-(id)description;
-(long long)appearance;
-(void)didEnd;
-(BOOL)hasLifted;
-(void)didBeginLift;
-(void)didCompleteLift;
-(BOOL)enrouteToOrReachedTerminalState;
-(void)willBeginCancelling;
-(BOOL)hasBeganCancelling;
-(void)didCompleteCancelling;
-(void)didBeginCancelling;
-(BOOL)hasBeganDroppingInto;
-(void)didBeginDropping;
-(void)didCompleteDropping;
-(void)didBeginDroppingInto;
-(void)setDragState:(int)arg1 ;
-(void)setHasLifted:(BOOL)arg1 ;
-(void)setHasBeganCancelling:(BOOL)arg1 ;
-(int)dragState;
-(void)didMove;
@end

