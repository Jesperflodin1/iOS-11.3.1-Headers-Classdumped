/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIKeyboardTextSelectionGestureCluster.h>

@interface _UIKeyboardBasedTextSelectionGestureCluster : _UIKeyboardTextSelectionGestureCluster
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)owner;
-(void)oneFingerForcePan:(id)arg1 ;
-(void)oneFingerForcePress:(id)arg1 ;
-(BOOL)enclosingScrollViewIsScrolling;
-(void)transitionFromBlockMagnifyToBlockSelectWithLocation:(CGPoint)arg1 viaDrag:(BOOL)arg2 ;
-(void)endOneFingerSelectWithExecutionContext:(id)arg1 ;
-(void)updateOneFingerSelectWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)beginOneFingerSelectWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
@end

